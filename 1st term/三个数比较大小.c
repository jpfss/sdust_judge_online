#include<stdio.h>
int main()
{
    int input0,input1,input2,tmp;
    scanf("%d%d%d",&input0,&input1,&input2);
    if(input0>=input1){
        tmp = input0;
        input0 = input1;
        input1 = tmp;
    }
    if(input0>=input2){
        tmp = input0;
        input0 = input2;
        input2 = tmp;
    }
    if(input1>=input2){
        tmp = input1;
        input1 = input2;
        input2 = tmp;
    }


    printf("%d %d %d",input0,input1,input2);
    return 0;
}


