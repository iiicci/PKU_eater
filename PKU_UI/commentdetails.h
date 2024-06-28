#ifndef COMMENTDETAILS_H
#define COMMENTDETAILS_H

#include <QDialog>
#include "cuisine.h"
namespace Ui {
class CommentDetails;
}

class CommentDetails : public QDialog
{
    Q_OBJECT

public:
    explicit CommentDetails(QWidget *parent, Cuisine &c);
    ~CommentDetails();

private slots:

    void on_backToCuisine_clicked();


    void on_pageup_clicked();

    void on_pagedown_clicked();

private:
    Ui::CommentDetails *ui;
    Cuisine &cuisine;
    int page;
    int maxpage;
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // COMMENTDETAILS_H
