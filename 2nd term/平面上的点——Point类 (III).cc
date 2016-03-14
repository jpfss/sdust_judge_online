//平面上的点——Point类 (III)

#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
private :
    double a,b;
    public:
 
        Point(double aa,double b):a(aa),b(b){
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is created."<<endl;
        };
 
        Point(){
            a = 0;
            b = 0;
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is created."<<endl;
        };
        Point(double aa):a(aa){
            b = a;
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is created."<<endl;
        };
 
        Point(Point &point):a(point.a),b(point.b){
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is copied."<<endl;
        };
 
        ~Point(){
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is erased."<<endl;
        };
 
        void show(){
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
        }
};
 
void showPoint(Point point){
    point.show();
}
void showPoint(Point point0,Point point1){
    point0.show();
    point1.show();
}
void showPoint(Point point0,Point point1,Point point2){
    point0.show();
    point1.show();
    point2.show();
}
 
int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        showPoint(p);
    }
    Point q1(q), q2(1);
    showPoint(q1, q2, q);
}
/**************************************************************
    Problem: 1123
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:8 ms
    Memory:1272 kb
****************************************************************/