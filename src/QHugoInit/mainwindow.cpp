#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>
#include <QMovie>
#include <qfiledialog.h>
#include <qstandardpaths.h>
#include <filesystem>
#include <QThread>
#include <ctime>

//TODO 简单封装一个用于多线程通信的类
class run_thread:public QThread{
public:
    run_thread() = delete;
    run_thread(const std::function<void()>&Runnable,QObject* parent = nullptr):m_task(nullptr){
        m_task = Runnable;
    }
    void run()override{
        if(m_task!=nullptr);
            m_task();
    }
private:
    std::function<void()>m_task;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("一键搭建hugo博客工具——made by L_B__");
    this->setWindowIcon(QIcon(":/favicon.ico"));
    m_movie = new QMovie(":/waiting.gif");
    QSize si(ui->label->width(),ui->label->height());//把gif图片设置和lable同高宽
    m_movie->setScaledSize(si);
    m_movie->start();
    ui->label->setMovie(m_movie);
    ui->w2->setVisible(false);
    ui->w3->setVisible(false);
    ui->w4->setVisible(false);
    m_logWriter.open("./log.txt",std::ios::app);//打开日志文件开始读写
    if(!m_logWriter.is_open()){
        QMessageBox::information(nullptr,"提示","日志文件写入失败");
    }else{//写入这次日志的时间
        m_logWriter<<"\n\n\r";
        time_t now = time(0);
        char* dt = ctime(&now); //得到表示日期的字符串
        m_logWriter<<dt<<'\n';
    }
}

MainWindow::~MainWindow()
{
    m_logWriter.close();
    delete ui;
}

void MainWindow::ending()
{
    ui->l1->setText("已完成博客部署");
    ui->l2->setText("您的本地博客路径为："+m_Path);
    ui->l3->setText(R"(<html>    <style>
                    a {
                        color:#3281b8;
                    }
                </style><head/><body><p>—=≡∑(((つω)つ如果工具对你有帮助，欢迎<a href="#">一键三连</a><br><br>如果再<a href="#">给个star</a>就再好不过了</p></body></html>)");
    ui->w2->setVisible(false);
    ui->w3->setVisible(false);
    ui->w4->setVisible(false);
}


void MainWindow::on_left_Btn_clicked()
{
    QCoreApplication::exit();
}


void MainWindow::on_startBtn_clicked()
{
    ui->l1->setText("请选择您需要创建的hugo博客路径");
    ui->l2->setText("本网站采用hugo搭建，使用前请确保安装git工具");
    ui->l3->setOpenExternalLinks(false);
    ui->l3->setText("hugo框架是创建hugo博客的基础，git工具是拉取主题的关键。");
    ui->w5->setVisible(false);
    ui->w2->setVisible(true);
    ui->w4->setVisible(true);
}


void MainWindow::on_setBtn_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this,"选择搭建博客路径",
                                                     QStandardPaths::writableLocation(QStandardPaths::DownloadLocation));
    ui->input->setText(path);
}


void MainWindow::on_right_Btn_clicked()
{
    auto path = ui->input->text();
    if(!QDir(path).exists()||path.isEmpty()){
        QMessageBox::warning(nullptr,"提示","文件夹路径不存在");
        return;
    }
    ui->w2->setVisible(false);
    ui->w4->setVisible(false);
    ui->w3->setVisible(true);
    ui->l1->setText("一切即将准备就绪");
    ui->l2->setText("正在初始化您的hugo网站");
    ui->l3->setOpenExternalLinks(true);
    ui->l3->setText(R"(<html>    <style>
                    a {
                        color:#3281b8;
                    }
                </style><head/><body><p>这可能会耗费几分钟，请不要强制关闭应用程序<br/><br/>闲得无聊？<a href="#">给个star</a></p></body></html>)");
    QProcess qp;
    std::ofstream writer;
    m_Path = path;
    auto std_str = m_Path.toStdString();

    //first step
    writer.open("./exec_code.bat");
    if(!writer.is_open()){
        QMessageBox::warning(nullptr,"提示","第一次写入文件打开失败");
        writer.close();
        QCoreApplication::exit(1);
    }
    ui->info_text->setText("正在初始化 hugo 博客");
    std::replace(std_str.begin(),std_str.end(),'/','\\');   //这里注意：cmd32命令只支持反斜杠！
    writer<<R"(chcp 65001)"<<'\n';                      //设置编码为utf-8
    writer<<R"(copy .\hugo.exe )"<<std_str<<'\n';       //copy一份hugo.exe到目标目录下
    writer<<"cd /d"<<std_str<<'\n';                     //切换到创建目录，这里/d代表直接一步到位的切换目录
    writer<<R"(.\hugo new site myBlog)"<<'\n';          //初始化hugo命令
    writer.close();
    qp.startCommand(R"(.\exec_code.bat)");
    if(qp.waitForFinished()){
        QString str = qp.readAll();
        m_logWriter<<"-----1st step-----\n\r"<<str.toStdString()<<'\n';
        ui->info_text->setText(" hugo 博客初始化完成");
    }

    //second step：执行此步之前先判断git是否可用，此步执行时间最久，不要让它卡死主线程，故需要用到多线程技术
    qp.startCommand("git");
    if(!qp.waitForFinished()){
        QMessageBox::warning(nullptr,"提示","未安装git工具或未设置到环境变量");
        QCoreApplication::exit(1);
    }
    writer.open("./exec_code.bat");
    if(!writer.is_open()){
        QMessageBox::warning(nullptr,"提示","第二次写入文件打开失败");
        writer.close();
        QCoreApplication::exit(1);
    }
    ui->info_text->setText("正在下载 FeelIt 主题");
    std::filesystem::path blog_path = std_str;
    blog_path /= "myBlog";
    m_Path = blog_path.string().c_str();
    writer<<"cd /d"<<blog_path<<"\\themes"<<'\n';           //cd到themes文件夹目录下
    writer<<"git clone https://gitee.com/acking-you/FeelIt.git"<<'\n';//开始通过git下载主题包
    writer.close();
    QThread* sub_thread = new run_thread([&]{   //最耗时间的工作别去干扰主线程的正常运行，否则主线程可能看起来会陷入瘫痪
        QProcess tqp;
        //信号槽机制，主线程等待子线程完成任务发送信号后再执行最后的步骤，因为这个过程肯定是要同步进行，故需要信号槽来等待
        connect(&tqp,&QProcess::finished,[&](int exitCode, QProcess::ExitStatus exitStatus){
            //step third
            std::ofstream writer;
            QProcess qp;
            writer.open("./exec_code.bat");
            if(!writer.is_open()){
                QMessageBox::warning(nullptr,"提示","第三次写入文件打开失败");
                writer.close();
                QCoreApplication::exit(1);
            }
            ui->info_text->setText("配置本地主题中...");
            writer<<"cd /d"<<m_Path.toStdString()<<'\n';       //cd到blog_path
            writer<<R"(del .\config.toml)"<<'\n';      //删除原本的config文件
            writer<<R"(move .\themes\FeelIt\config.toml .\)"<<'\n';  //将我的配置文件放到顶级目录去
            writer<<R"(move .\themes\FeelIt\exampleSite\static\*  .\static\)"<<'\n';//移动static图片资源
            writer<<R"(move ..\hugo.exe .\)"<<'\n';//将之前的hugo.exe移动到真正的博客目录下
            writer<<R"(mkdir .\content\posts)"<<'\n';  //创建用于写文章的目录
            writer.close();
            qp.startCommand(R"(.\exec_code.bat)");
            if(qp.waitForFinished()){
                ui->info_text->setText("配置完成   ");
                ending();
                m_logWriter<<"-----3rd step-----\n\r"<<tqp.readAll().toStdString();
            }
        });
        tqp.startCommand(R"(.\exec_code.bat)");

        if(!tqp.waitForFinished()){
            QMessageBox::warning(nullptr,"提示","下载主题响应超时");
            QCoreApplication::exit(1);
        }else{
            m_logWriter<<"-----2nd step-----\n\r"<<tqp.readAll().toStdString();
        }
    });
    sub_thread->start();
}
