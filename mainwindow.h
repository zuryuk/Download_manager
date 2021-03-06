#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void removePressed();
    void on_download_btn_clicked();
    void on_folder_sel_clicked();
    void on_url_returnPressed();
private:
    void set_folder(QString);
    QString get_folder();
    void set_url(QString);
    QString get_url();
    QString folder;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
