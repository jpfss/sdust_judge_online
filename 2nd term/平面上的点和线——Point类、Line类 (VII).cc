#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
    double ax,ay;
    static int n,t;
public:
    friend class Line;
    Point(double x=0,double y=0):ax(x),ay(y){n++;t++;}
    Point(const Point& x){ax=x.ax;ay=x.ay;n++;t++;}
    ~Point(){n--;}
    static void showCounter(){cout<<"Current : "<<n<<" points."<<endl;}
    static void showSum(){cout<<"In total : "<<t<<" points."<<endl;}
 
 
};
int Point::n=0;
int Point::t=0;
class Line{
    Point p,q;
static int n,t;
public:
    Line (Point &ip,Point& iq):p(ip),q(iq){n++;t++;}
    Line(const Line &x){p=x.p;q=x.q;n++;t++;}
    Line(double x1,double y1,double x2,double y2):p(x1,y1),q(x2,y2){n++;t++;}
    Line():p(0,0),q(0,0){n++;t++;}
    ~Line(){n--;}
    static void showCounter(){cout<<"Current : "<<n<<" lines."<<endl;}
    static void showSum(){cout<<"In total : "<<t<<" lines."<<endl;}
    void readLine(){
        char c;
        cin>>p.ax>>c>>p.ay>>q.ax>>c>>q.ay;
    }
 
};
int Line::n=0;
int Line::t=0;
 
 
 
int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}

