#include <stdio.h>


int output(int a,int b,int flag)
{
    int c,m,t;
    if(a==0&&b!=0){
//            printf("%d ",b);
//            printf("%d\n",a);
//
        if(flag == 0)
            return b;
        else
            return a;
            }
        else if(a!=0&&b==0){
             //printf("%d ",a);
             //printf("%d\n",b);
        if(flag == 0)
            return a;
        else
            return b;
        }else
    {
        if(a<b)
        {
            t=a;
            a=b;
            b=t;
        }
        m=a*b;
        c=a%b;
        while(c!=0)
        {
            a=b;
            b=c;
            c=a%b;
        }
        //printf("%d ",b);
        //printf("%d\n",m/b);
        if(flag==0)
            return b;
        else
            return m/b;
    }
}

int gcd(int a,int b)
{
    return output(a,b,0);
}
int lcm(int a,int b)
{
    return output(a,b,1);
}



 //==============================================
 //==============================================

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
