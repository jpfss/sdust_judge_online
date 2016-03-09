//original contest name is 求(x-y+z)*2

#include<iostream>
using namespace std;
 
int f(int x,int y = 1,int z = 0){
    return (x-y+z)*2;
}
 
 
int main()
{
    int n, x, y, z;
    while(cin>>n)
    {
        if(n == 3)
        {
            cin>>x>>y>>z;
            cout<<f(x, y, z)<<endl;
        }
        if(n == 2)
        {
            cin>>x>>y;
            cout<<f(x, y)<<endl;
        }
        if(n == 1)
        {
            cin>>x;
            cout<<f(x)<<endl;
        }
        if(n == 0)
            break;
    }
}
 
