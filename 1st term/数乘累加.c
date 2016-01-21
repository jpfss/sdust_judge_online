#include<stdio.h>
int main()
{
    int i,j=1;
    long long sum=0,m=1,n;

    scanf("%lld",&n);


    while(j<=n){

        m=m*j;
        sum = sum+m;
        j++;
        if(sum>4294967295){
        printf("overflow");
        return 0;
        }
    }

    printf("%lld",sum);


    return 0;
}
