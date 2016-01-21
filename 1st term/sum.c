#include<stdio.h>
int main()
{
    int input;
    scanf("%d",&input);
    int sum=0;

    if(input%2==0){
        sum=input;
        input=input-1;
    }
    input=(input+1)/2;
    input=input*(sum-1);

    sum = sum + input;
    printf("%d",sum);
    return 0;
}
