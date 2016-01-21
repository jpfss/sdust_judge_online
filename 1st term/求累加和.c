#include<stdio.h>
int sump=0;
int add(int input)
{
    if(sump == 0)
        sump = input;
        else
            sump += input;
    return sump;
}

int main()
{
    int min, max, sum;
    scanf("%d%d", &min, &max);
    while(min <= max)
        sum = add(min++);
    printf("%d", sum);
    return 0;
}
