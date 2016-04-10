#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
private:
    double xx, yy;
public:
    Point(){xx = 0;yy = 0;};
    Point(double in_x,double in_y){
        xx = in_x;
        yy = in_y;
    }
 
    double getX(){
        return xx;
    }
    double getY(){
        return yy;
    }
 
    void setX(double in_x){xx = in_x;}
    void setY(double in_y){yy = in_y;}
    void setOffset(double in_x, double in_y){
    xx = in_x;
    yy = in_y;
    }
    void show(){
        cout<<"Point : ("<<xx<<", "<<yy<<")"<<endl;
    }
};
 
class Line{
private:
    Point p0,p1;
public:
    Line(double x0,double y0,double x1,double y1){
        p0.setOffset(x0,y0);
        p1.setOffset(x1,y1);
    }
 
    Line(Point in_p0,Point in_p1){
        p0 = in_p0;
        p1 = in_p1;
    }
 
    void show(){
        cout<<"Line : ("
        <<p0.getX()
        <<", "
       <<p0.getY()
        <<") to ("
       <<p1.getX()
        <<", "
                <<p1.getY()
        <<")"
        <<endl;
    }
};
 
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}