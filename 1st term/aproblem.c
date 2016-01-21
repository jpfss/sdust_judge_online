#include<stdio.h>

int main()
{
    int input0,input1;
    while(1){
        scanf("%d%d",&input0,&input1);
        if(input0 == 0&&input1 == 0){
            return 0;
        }
        printf("%d\n",input0+input1);
    }
       return 0;
}
