#ifndef CUISINEDETAILS_H
#define CUISINEDETAILS_H

#include <QDialog>
#include <QLabel>
#include <QWidget>
#include <Qt>
#include <QMouseEvent>
#include "cuisine.h"
#include "mainwindow.h"
#include "clientsocket.h"

namespace Ui {
class CuisineDetails;
}

class CuisineDetails : public QDialog
{
    Q_OBJECT

public:
    ClientSocket socket;
    explicit CuisineDetails(QWidget *parent, Cuisine &c);
    ~CuisineDetails();

signals:

private slots:
    void on_backToMain_clicked();

    void on_upvote_clicked();

    void on_enterComment_clicked();

    void on_downvote_clicked();

    void on_changeSelectedComments_clicked();


    void on_showAllComment_clicked();

private:
    Ui::CuisineDetails *ui;
    Cuisine &cuisine;
    bool flag1;
    bool flag2;

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // CUISINEDETAILS_H
