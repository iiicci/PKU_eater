#ifndef UPLOAD_H
#define UPLOAD_H

#include <QDialog>
#include <QWidget>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDropEvent>
#include <QUrl>
#include "clientsocket.h"
#include "msg.h"
namespace Ui {
class UpLoad;
}

class UpLoad : public QDialog
{
    Q_OBJECT

public:
    ClientSocket socket;
    QImage img;
    explicit UpLoad(QWidget *parent = nullptr);
    ~UpLoad();
protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    Ui::UpLoad *ui;
};

#endif // UPLOAD_H
