#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cuisine.h>
#include <msg.h>
#include <QStringList>
#include "clientsocket.h"
#include<qpainter.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setQlabelImage();
    void testConstruct(int i);

public:
    QVector<Cuisine> cuisines=QVector<Cuisine>(10);
    QStringList namelist;
    ClientSocket socket;
    qint64 cuisines_num=6;

private slots:
    void on_imgButton_1_clicked();
    void on_imgButton_2_clicked();
    void on_imgButton_3_clicked();
    void on_imgButton_4_clicked();
    void on_imgButton_5_clicked();
    void on_imgButton_6_clicked();

    void on_RandomButton_clicked();

    void on_pushButtonChange_clicked();

    void on_pushButtonSearch_clicked();

private:
    Ui::MainWindow *ui;

private:
    void showMainWindow();
    void SetVector(QVector<Cuisine> _cuisines);
protected:
    void paintEvent(QPaintEvent *event) override;
private slots:
    void msg_ready_slot(ServerMsg Smsg);

    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
