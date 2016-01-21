#include<stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    if(input<1)
        printf("Calm");
    else if(input<=3)
        printf("Light air");
    else if(input<=27)
        printf("Breeze");
    else if(input<=47)
        printf("Gale");
    else if(input<=63)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}
