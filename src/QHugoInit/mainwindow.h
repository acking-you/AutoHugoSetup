#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QProcess>
#include<fstream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ending();
private slots:
    void on_left_Btn_clicked();

    void on_startBtn_clicked();

    void on_setBtn_clicked();

    void on_right_Btn_clicked();

private:
    Ui::MainWindow *ui;
    std::ofstream m_logWriter;
    QMovie* m_movie;
    QString m_Path;
};
#endif // MAINWINDOW_H
