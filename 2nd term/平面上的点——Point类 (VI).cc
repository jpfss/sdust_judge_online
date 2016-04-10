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
    Point(const Point& p):ax(p.ax),ay(p.ay){n++;t++;num=t;}
    ~Point(){n--;}
    Point & copy(Point &a){ax=a.ax;ay=a.ay;return *this;}
    bool isEqual (const Point &a)const{
        if(a.ax==ax&&a.ay==ay)
            return true;
        else
            return false;
    }
    double x()const {return ax;}
    double y() const {return ay;}
    double getX(){return ax;}
    double getY(){return ay;}
    double  x(double ix){ax=ix; return ax;}
    double  y(double iy){ay=iy;return iy;}
    double setX(double ix){ax=ix;return ix;}
    double setY(double iy){ay=iy;return iy;}
    Point  &setPoint(double ix,double iy){ax=ix;ay=iy;return *this ;}
    void show()const{cout<<setprecision(16)<<"Point["<<num<<"] : ("<<ax<<", "<<ay<<")"<<endl;}
    static void showCounter(){cout<<"Current : "<<n<<" points."<<endl;}
    static void showSumOfPoint(){cout<<"In total : "<<t<<" points."<<endl;}
    Point & inverse(){double t=ax;ax=ay;ay=t;return *this;}
    Point & inverse(Point &a){ax=a.ay;ay=a.ax;return *this;}
    friend void ShowPoint(const Point &p);
    friend void ShowPoint(const Point &p,const Point &q);
 
};
void showPoint(Point &q1,Point &q2,Point &q3){q1.show();q2.show();q3.show();}
int  Point::n=0;
int  Point::t=0;
void ShowPoint(const Point& p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.ax<<", "<<p.ay<<")"<<endl;
}
void ShowPoint(const Point &p,const Point &q)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.ax<<", "<<p.ax<<")"<<endl;
    cout<<std::setprecision(16)<<"Point : ("<<q.ax<<", "<<q.ay<<")"<<endl;
}
void ShowPoint(double x, double y)
{
    //Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
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
    Point p, q, pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            p.copy(pt[l].setPoint(a, b));
        if(a > b)
            p.copy(pt[l].setPoint(a, b).inverse());
        if(a < b)
            p.inverse(pt[l].setPoint(a, b));
        if(a < 0)
            q.copy(p).inverse();
        if(b < 0)
            q.inverse(p).copy(pt[l]);
        pt[l++].show();
        p.show();
    }
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].x(), y -= pt[i].y();
    pt[l].x(y), pt[l].y(x);
    q.copy(pt[l]).show();
    for(int i = 0; i <= l; i++)
        pt[i].show();
    cout<<"==========gorgeous separator=========="<<endl;
    const Point const_point(3, 3);
    const_point.show();
    for(int i = 0; i <= l; i++)
    {
        if(const_point.isEqual(pt[i]))
        {
            ShowPoint(const_point);
            ShowPoint(const_point.x(), const_point.y());
            ShowPoint(Point(const_point.x(), const_point.y()));
        }
    }
    const_point.showSumOfPoint();
}
 