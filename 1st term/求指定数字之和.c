#include<stdio.h>
int main()
{
    int i;
    int input;
    int Count=0;
    int sum = 0;
    int a,b,c;
    while(scanf("%d",&input)!=EOF){
        Count++;
        i=100;
        while(i<1000){
            if(i%input==0){
                a = i/100;
                b = (i%100)/10;
                c = i%10;
                if(a==b||b==c||a==c)
                {

                }else{
                    sum = sum+i;
                    //printf("%d\n",i);
                    }
            }
            i++;
        }
        printf("case %d:%d\n",Count,sum);
        sum = 0;
    }
    return 0;
}
