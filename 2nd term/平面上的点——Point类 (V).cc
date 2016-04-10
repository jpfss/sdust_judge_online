#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
    double ax,ay,num;
 
public:
    static int n,t;
    Point(double ix,double iy):ax(ix),ay(iy){n++;t++;num=t;}
    Point(double ix ):ax(ix),ay(ix){n++;t++;num=t;}
    Point( ):ax(0),ay(0){n++;t++;num=t;}
    Point( Point& p):ax(p.ax),ay(p.ay){n++;t++;num=t;}
    ~Point(){n--;}
    double x(){return ax;}
    double y() {return ay;}
    double getX(){return ax;}
    double getY(){return ay;}
    double  x(double ix){ax=ix; return ax;}
    double  y(double iy){ay=iy;return iy;}
    double setX(double ix){ax=ix;return ix;}
    double setY(double iy){ay=iy;return iy;}
    Point  &setPoint(double ix,double iy){ax=ix;ay=iy;return *this ;}
    void show(){cout<<setprecision(16)<<"Point["<<num<<"] : ("<<ax<<", "<<ay<<")"<<endl;}
    static void showCounter(){cout<<"Current : "<<n<<" points."<<endl;}
    static void showSumOfPoint(){cout<<"In total : "<<t<<" points."<<endl;}
 
 
};
void showPoint(Point &q1,Point &q2,Point &q3){q1.show();q2.show();q3.show();}
int  Point::n=0;
int  Point::t=0;
 
 
void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}
 
void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}
 
void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}
 
int main()
{
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}
