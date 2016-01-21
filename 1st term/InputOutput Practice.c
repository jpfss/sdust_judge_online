#include<stdio.h>
int main()
{
    int inCount;
    int i;
    int input,sum;

    while(1){
        scanf("%d",&inCount);

        if(inCount==0){
            break;
        }

        i=0;

        while(i<inCount){
            i++;
            scanf("%d",&input);
            if(i==1){
                sum = input;
            }else{
                sum=sum+input;
            }
        }

        printf("%d\n",sum);

    }
    return 0;
}
