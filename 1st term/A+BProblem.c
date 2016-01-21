#include<stdio.h>

int main()
{
    int a,b,c=0,d;
    scanf("%d",&d);
    while(c!=d){
        c++;
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
