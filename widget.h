#ifndef WIDGET_H
#define WIDGET_H
#include <QCloseEvent>

#include <QWidget>
#include <sys/types.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
   // void on_comboBox_currentTextChanged(const QString &arg1);
    void on_b_play_clicked();
    void on_b_stop_clicked();
    void on_b_restart_clicked();
    void on_b_previous_clicked();
    void on_b_next_clicked();

    void closeEvent(QCloseEvent *event);
 //   void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Widget *ui;

    pid_t childPid = 0;     // ← هنا التعريف الصحيح
    QString currentUrl;     // ← لتخزين رابط المحطة
};

#endif
