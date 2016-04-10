#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
    double ax,ay;
public:
    friend class Line;
     
    Point(Point &a){
        ax=a.ax;ay=a.ay;
        cout<<"Point : ("
        <<ax
        <<", "
        <<ay
        <<") is copied."
        <<endl;
        }
         
    Point(double x=0,double y=0):ax(x),ay(y){
        cout<<"Point : ("<<ax<<", "<<ay<<") is created."<<endl;
        }
 
        ~Point(){cout<<"Point : ("<<ax<<", "<<ay<<") is erased."<<endl;}
    void show(){cout<<"Point : ("<<ax<<", "<<ay<<")"<<endl;}
 
};
class Line{
Point p,q;
public:
    Line():p(0,0),q(0,0){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    Line(Point &a,Point &b):p(a),q(b){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    Line(double x1,double y1,double x2,double y2):p(x1,y1),q(x2,y2){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is created."<<endl;}
    ~Line(){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<") is erased."<<endl;}
    void SetLine(double x1, double y1, double x2, double y2){p.ax=x1;p.ay=y1;q.ax=x2;q.ay=y2;}
 
    void show(){cout<<"Line : ("<<p.ax<<", "<<p.ay<<") to ("<<q.ax<<", "<<q.ay<<")"<<endl;}
};

 
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 1; i <= num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}

