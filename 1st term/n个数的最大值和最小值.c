#include<stdio.h>

int main()
{
    int Conts;
    int i=1;
    int input,min,max;
    scanf("%d",&Conts);

    scanf("%d",&input);
    min = input;
    max = input;

    while(i<=Conts-1){
        i++;
        scanf("%d",&input);

        if(input>=max){
            max = input;
        }
        if(input<=min){
            min = input;
        }
    }
    printf("The maximum number is %d.\n",max);
    printf("The minimum number is %d.",min);
    return 0;
}
