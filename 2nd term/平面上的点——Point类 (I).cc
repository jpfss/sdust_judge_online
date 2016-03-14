// 平面上的点——Point类 (I)

#include<iostream>
#include<iomanip>
using namespace std;
 
class Point{
private :
    double a,b;
    public:
        Point(){a = 0;b = 0;};
        Point(double aa,double b):a(aa),b(b){};
 
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
    q.show();
}
/**************************************************************
    Problem: 1121
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1268 kb
****************************************************************/