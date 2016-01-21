#include<stdio.h>

int main()
{
    int inCountY,inCountX;
    int n=0,m;
    int sum,input;

    scanf("%d",&inCountY);
    while(n<inCountY){
        scanf("%d",&inCountX);

        if(inCountX==0){
            sum=0;
        }
        m = 0;
        while(m<inCountX){
            m++;
            scanf("%d",&input);
            if(m==1){
                sum=input;
            }else{
                sum = sum+input;
            }
        }
        printf("%d\n",sum);
        n++;
    }



    return 0;
}
