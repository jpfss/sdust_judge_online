#include<stdio.h>

int lcm(int a,int b,int c)
{
    int ret = a*b/c;
    return ret;
}
int gcd(int n,int m)
{

    int temp;
    if (n<m)
     {
      temp=n;
      n=m;
      m=temp;
     }

     if(m==0)
        return n;
     temp=n%m;
     n=m;
     m=temp;
     return  gcd(n,m);
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int t=gcd(a, b);
    printf("%d %d", t,lcm(a,b,t));
    return 0;
}
