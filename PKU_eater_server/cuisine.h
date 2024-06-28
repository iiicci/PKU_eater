#ifndef CUISINE_H
#define CUISINE_H

#include<qimage.h>
#include<Qstring>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>

using namespace std;

class Cuisine{
private:
    QString name;//菜品名称
    double price;//菜品价格
    QString place;//供应地点以字符串存储，以便模糊搜索
    QString ingred;//营养成分or原材料
    QString avai_time;//供应时间
    QString tag;//用户上传标签，demo中忽略
    QImage img;//菜品图片
    double totalscore;//rating所得总评分,(0~5)
    QVector<int> sh_cmt;//打分
    int totalupvote;//点赞数量
    int totaldownvote;//点踩数量
    int spicy;//辣度
    int hot;//热度
public:
    QVector<QString> lo_cmt;//长评论
    int num_lo_cmt;//长评论数量
public:
    //set
    void set_name(const QString _name);
    void set_price(double _price);
    void set_place(QString _place);
    void set_ingred(QString _ingred);
    void set_avaitime(QString _avai_time);
    void set_img(QImage img);
        //先qImage.load(图片)，再set_img(qImage);
    int  set_tag(QString _tag);
    void set_upvote(int _upvote){
        totalupvote=_upvote;};
    void set_downvote(int _downvote){
        totaldownvote=_downvote;};
public:
    //get
    const QString get_name() const;
    double get_price();
    QString get_ingred();
    QString get_avai_time();
    QString get_tag();
    QImage get_img();
    double get_score();
    int get_upvote(){
        return totalupvote;
    };
    int get_downvote(){
        return totaldownvote;
    };
    QVector<QString>& getVector() {
        return lo_cmt;
    }
    int get_hot(){
        return hot;
    }
    int get_spicy(){
        return spicy;
    }
    int get_place(){
        if(place=="学一")
            return 0;
        else if(place=="家园")
            return 1;
    }
public:
    //score and vote
    void score(int up);//打分
    void upvote();//点赞
    void downvote();//点踩
    void cancelUpvote();//取消点赞
    void cancelDownvote();//取消点踩
private:
    double rating();
        //将当前赞和踩计算为score;
        //获取score建议用get_score();
public:
    //QJsonObeject对象<=>Cuisine对象
    //理论来讲 *不会* 有 *直接用* 这组函数的需要
    //是为了method：.json<=>Cuisine
    //method：.json<=>Cuisine我会写在别的文件中
    QJsonObject toJson() const;
    void fromJson(const QJsonObject &jsonObj);
public:
    //测试的函数，没用！
    void test_construc(QString str);
    void test_prin();
};

#endif // CUISINE_H
