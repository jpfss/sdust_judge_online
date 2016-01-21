#include <stdio.h>

int output(int a,int b)
{
    int c,m,t;
    if(a==0&&b!=0){
            printf("%d ",b);
            printf("%d\n",a);}
        else if(a!=0&&b==0){
             printf("%d ",a);
             printf("%d\n",b);

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
        printf("%d ",b);
        printf("%d\n",m/b);
    }
}


int main()
{   int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        output(a,b);
    }
    return 0;
}
