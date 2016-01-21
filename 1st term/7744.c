#include<stdio.h>
#include<math.h>
int is7744(int n)
{
    int a;
    a = sqrt(n);
    if (a*a==n){
        printf("%d",n);
    }
    return 0;
}
int main()
{
    int n=1000;
    while(n<9999){
        n++;
        sqrt(n);

    }
    return 0;

}
