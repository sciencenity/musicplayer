#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    M_Player = new QMediaPlayer;
    ui->play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    M_Player->setVolume((ui->verticalSlider->value()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete M_Player;
}


void MainWindow::on_actionopen_file_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Audio File"), "", tr("MP3 Files (*.MP3)"));
    M_Player->setMedia((QUrl(FileName)));
    QFileInfo file(FileName);

    ui->label_2->setText(file.fileName());
}

void MainWindow::on_pushButton_clicked()
{
    //M_Player->play();
}

void MainWindow::on_pushButton_2_clicked()
{
    M_Player->pause();
}

void MainWindow::on_verticalSlider_sliderMoved(int position)
{
    M_Player->setVolume(position);
}

void MainWindow::on_play_clicked()
{
     M_Player->play();
}

void MainWindow::on_push_button_clicked()
{
    //ui->push_button->setIcon((style()->standardIcon(QStyle::SP_MediaPause)));
}

void MainWindow::on_push_button_clicked(bool checked)
{
    if(checked==0){
        ui->push_button->setIcon((style()->standardIcon(QStyle::SP_MediaPause)));
    }else{
        ui->push_button->setIcon((style()->standardIcon(QStyle::SP_MediaPlay)));
    }

}
