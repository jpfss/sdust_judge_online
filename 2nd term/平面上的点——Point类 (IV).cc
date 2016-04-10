#include<iostream>
#include<iomanip>
using namespace std;
static int _count = 0;
static int _total = 0;
class Point
{
private:
    double x,y;
 
public:
    Point(){
        _count++;
        _total++;
        x = 0;
        y = 0;
    }
 
    Point(double in){
        x = y = in;
        _count++;
        _total++;
    }
 
    Point(double in_x, double in_y){
        x = in_x;
        y = in_y;
        _count++;
        _total++;
    }
 
    Point(Point &point){
        x = point.x;
        y = point.y;
        _count++;
        _total++;
 
    }
 
    void show(){
        cout<<"Point : ("<<setprecision(16)<<x<<setprecision(16)<<", "<<y<<")"<<endl;
    }
 
 
 
 static   void showSumOfPoint(){
        cout<<"In total : "<<_total<<" points."<<endl;
    }
static void showCounter(){
        cout<<"Current : "<<_count<<" points."<<endl;
    }
    ~Point(){
        _count--;
    }
 
};
 
void showPoint(Point &point,Point &p1,Point &p2){
    point.show();
    p1.show();
    p2.show();
}
void showCounter(){
        cout<<"Current : "<<_count<<" points."<<endl;
    }
 
int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}