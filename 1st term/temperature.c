#include<stdio.h>

int main()
{
    int f;
    double c;

    scanf("%d",&f);
    c = f-32;
    c = c * 5;
    c = c/9;
    printf("%.3lf",c);
    return 0;
}
