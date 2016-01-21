#include<stdio.h>
#define SWAP(t1,x1,x2) t1=x1,x1=x2,x2=t1
void int_swap(int *x1,int *x2)
{
    int tmp = *x1;
        *x1 = *x2;
        *x2 = tmp;
}

void dbl_swap(double *x2,double *y2)
{
    double t=*x2;
    *x2 = *y2;
    *y2 = t;
}



int main()
{
    int x1, y1, t1;
    double x2, y2, t2;

    scanf("%d %d", &x1, &y1);
    int_swap(&x1, &y1);
    printf("%d %d\n", x1, y1);

    scanf("%d %d", &x1, &y1);
    SWAP(t1, x1, y1);
    printf("%d %d\n", x1, y1);

    scanf("%lf %lf", &x2, &y2);
    dbl_swap(&x2, &y2);
    printf("%lg %lg\n", x2, y2);

    scanf("%lf %lf", &x2, &y2);
    SWAP(t2, x2, y2);
    printf("%lg %lg\n", x2, y2);
}
