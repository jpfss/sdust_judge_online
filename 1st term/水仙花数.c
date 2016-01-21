#include<stdio.h>

int main()
{
    int input,num;
    scanf("%d",&input);
    int bai,shi,ge;
    num = input;
    bai = input/100;
    input = input%100;
    shi = input/10;
    ge = input%10;
    input = bai*bai*bai+shi*shi*shi+ge*ge*ge;
    if(num == input){
       printf("YES");
       }else{
       printf("NO");
       }
       return 0;
}
