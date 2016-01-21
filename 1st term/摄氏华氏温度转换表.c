#include<stdio.h>
int main()
{
    double a,b,c,C,F,i;
    char inChar0,inChar1;
    scanf("%c->%c",&inChar0,&inChar1);
    if(inChar0=='C')
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("   C  ->    F\n");
        for(i=a;i<=b+0.01;i=i+c)
        {
            F=i*9.0/5+32;
            printf("%5.1lf -> %5.1lf\n",i,F);
        }
    }
    else
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("   F  ->    C\n");
        for(i=a;i<=b+0.01;i=i+c)
        {
            C=(i-32)*5.0/9;
            printf("%5.1lf -> %5.1lf\n",i,C);
        }
    }

    return 0;
}
//∏Ò Ωøÿ÷∆5.1f

