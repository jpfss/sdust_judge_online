//时间类的构造和输出

#include<iostream>
#include<iomanip>
using namespace std;
 
class Time{
private:
    int h,m,s;
public:
    Time(int h,int m,int s):h(h),m(m),s(s){};
    void showTime(){
        cout.fill('0');
        cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
 
    }
};
 
 
int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}
 
/**************************************************************
    Problem: 1385
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:2540 ms
    Memory:1268 kb
****************************************************************/