#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
    double ax,ay;
public:
    friend class Line;
    Point(Point &a){ax=a.ax;ay=a.ay;cout<<"Point : ("<<ax<<", "<<ay<<") is copied."<<endl;}
    Point(double x=0,double y=0):ax(x),ay(y){cout<<"Point : ("<<ax<<", "<<ay<<") is created."<<endl;}
    //Point():ax(0),ay(0){}
    ~Point(){cout<<"Point : ("<<ax<<", "<<ay<<") is erased."<<endl;}
    void show(){cout<<"Point : ("<<ax<<", "<<ay<<")"<<endl;}
 
};
class Line{
Point p,q;
public:
    Line():p(0,0),q(0,0){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    Line ( Line &a):p(a.p),q(a.q){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is copied."<<endl;}
    Line(Point &a,Point &b):p(a),q(b){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    Line(double x1,double y1,double x2,double y2):p(x1,y1),q(x2,y2){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    ~Line(){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is erased."<<endl;}
    void setLine(double x1, double y1, double x2, double y2){p.ax=x1;p.ay=y1;q.ax=x2;q.ay=y2;}
    void readLine(){char c;cin>>p.ax>>c>>p.ay>>q.ax>>c>>q.ay;}
    Line&setLine(Line &a){*this=a;return *this;}
    Line&setLine(Point &a,Point &b){p=a;q=b;return *this;}
    void show(){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<")"<<endl;}
};
 
 
int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t,q).show();
}

