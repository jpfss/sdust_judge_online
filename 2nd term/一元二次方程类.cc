//一元二次方程类
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Equation{
private:
    double a,b,c;
    double root0,root1;
 
public:
    Equation(double a,double b, double c):a(a),b(b),c(c){}
    void solve(){}
    void printRoot(){
        double delta = b*b - 4*a*c;
        root0 = (-b + sqrt(delta))/(2*a);
        root1 = (-b - sqrt(delta))/(2*a);
        cout<<fixed<<setprecision(2)<<root0<<" "<<root1<<endl;
    }
};
 
int main()
{
    double a, b, c;
    while (cin>>a>>b>>c)
    {
        Equation equ(a,b,c);
        equ.solve();
        equ.printRoot();
    }
    return 0;
}
/**************************************************************
    Problem: 1772
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1280 kb
****************************************************************/