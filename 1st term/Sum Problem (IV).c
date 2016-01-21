#include<stdio.h>
int main()
{
    int inCount,inCountY;
    int i;
    int input,sum;
    int n=0;

    scanf("%d",&inCountY);

    while(n<inCountY){

        n++;

        i=0;

        scanf("%d",&inCount);

        if(inCount==0){
            sum = 0;
        }

        while(i<inCount){
            i++;
            scanf("%d",&input);
            if(i==1){
                sum = input;
            }else{
                sum=sum+input;
            }
        }

        printf("%d",sum);

        if(n<=inCountY){
            printf("\n\n");
        }

    }
    return 0;
}
