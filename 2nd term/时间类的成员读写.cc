//世间类的成员读写

#include<iostream>
#include<iomanip>
using namespace std;
 
class Time{
private:
    int h,m,s;
public:
    Time(int h = 0,int m = 0,int s = 0):h(h),m(m),s(s){};
    void showTime(){
        cout.fill('0');
        cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
 
    }
 
    void hour(int hour){h = hour;}
    int hour(){return h;}
    void minute(int minute){m = minute;}
    int minute(){return m;}
    void second(int second){s = second;}
    int second(){return s;}
};
 
 
int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout<<setw(2)<<setfill('0')<<t.hour()<<":";
        cout<<setw(2)<<setfill('0')<<t.minute()<<":";
        cout<<setw(2)<<setfill('0')<<t.second()<<endl;
    }
}
 
/**************************************************************
    Problem: 1386
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:2424 ms
    Memory:1268 kb
****************************************************************/