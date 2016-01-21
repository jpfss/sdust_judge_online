#include<stdio.h>

int main()
{

    double count,price;
    double sum=0;
    while(scanf("%lf%lf",&count,&price)!=EOF){

        sum+=count*price;

    }
    printf("%.2f",sum);

    return 0;
}
