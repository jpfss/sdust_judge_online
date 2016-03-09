#include<iostream>
using namespace std;
 
double area(double r = 1.0){
    return r*r*3.14;
}
 
int main()
{
    double r;
    cin>>r;
    cout<<area(r)<<endl;
    cout<<area()<<endl;
    return 0;
}

