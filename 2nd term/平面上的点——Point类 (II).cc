
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
 
int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
    }
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}
/**************************************************************
    Problem: 1122
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:8 ms
    Memory:1268 kb
****************************************************************/