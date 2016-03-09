#include<iostream>
using namespace std;
 
void get_num(int& a,int& b,int& c){
    cin>>a>>b>>c;
}
//神奇的传引用。。。
void max_min(int &_max,int &_min,int &a,int &b,int &c){
    _max = a;
    _min = b;
 
    int tmp;
    if(_max < _min){
        tmp = _max;
        _max = _min;
        _min = tmp;
    }
 
    if(c>_max){
        _max = c;
    }
    if(c<_min){
        _min = c;
    }
}
 
int main()
{
    int cases;
    int mmax, mmin, a, b, c;
 
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        get_num(a, b, c);
        max_min(mmax, mmin, a, b, c);
        cout<<"case "<<i<<" : "<<mmax<<", "<<mmin<<endl;
    }
}

