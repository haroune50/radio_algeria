#include "widget.h"
#include "ui_widget.h"
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_b_play_clicked()
{
#if defined(__linux__)
    //ً
    if (childPid > 0) {
        kill(childPid, SIGTERM);
        waitpid(childPid, nullptr, 0);
        childPid = 0;
    }

    // 
    QString wilaya = ui->comboBox->currentText().toLower();


    
    //
    QString fullUrl =
        "https://radio" + wilaya +
        ".ice.infomaniak.ch/" +
        wilaya + ".mp3";

    //mpv
    childPid = fork();
    if (childPid == 0) {
        execlp("mpv",
               "mpv",
               "--no-video",
               fullUrl.toStdString().c_str(),
               NULL);
        _exit(1);
    }
#endif
}



/*stop button */
void Widget::on_b_stop_clicked()
{

    if (childPid > 0) {
        kill(childPid, SIGTERM);     
        waitpid(childPid, nullptr, 0); 
        childPid = 0;
    }
}

/*restart button */
void Widget::on_b_restart_clicked()
{
    on_b_stop_clicked();
    on_b_play_clicked();
}

/* previous button */
void Widget::on_b_previous_clicked()
{
    int index = ui->comboBox->currentIndex();
    if(index > 0) ui->comboBox->setCurrentIndex(index - 1);

}

/* next button */
void Widget::on_b_next_clicked()
{
    int index = ui->comboBox->currentIndex();
    if(index < ui->comboBox->count() - 1) ui->comboBox->setCurrentIndex(index + 1);
}

/* stop radio when close app*/
void Widget::closeEvent(QCloseEvent *event)
{
    on_b_stop_clicked();
    event->accept();
}









