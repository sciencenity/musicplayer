#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtMultimedia/QAbstractAudioInput>
#include<QtMultimedia/QAbstractAudioOutput>
#include<QFileDialog>
#include<QStyle>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_actionopen_file_triggered();

    void on_pushButton_clicked();

    void on_verticalSlider_sliderMoved(int position);

    void on_play_clicked();

    void on_push_button_clicked();

    void on_push_button_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *M_Player;
};
#endif // MAINWINDOW_H
