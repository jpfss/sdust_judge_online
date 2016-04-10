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
    double x()const {return ax;}
    double y()const{return ay;}
    void showNoEndOfLine()const{cout<<"Point : ("<<ax<<", "<<ay<<")";}
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
    const Point &start()const{return p;}
    const Point &end()const{return q;}
    void setStart(Point &a){p=a;}
    void setEnd(Point &b){q=b;}
    void show()const {cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<")"<<endl;}
};


void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}
 
void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}
 
void showLine(const Line& line)
{
    line.show();
}
 
int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}

