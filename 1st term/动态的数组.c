#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double* allocate(int n)
{
    return (double*)calloc(n,sizeof(double));
}
void input(double* p, int n)
{
    int i=0;
    while(i<n){
        scanf("%lf",p+i);
        i++;
    }
}
void output(double* p, int n)
{
    int mi,ma,i;
    scanf("%d%d",&mi,&ma);
    if(mi>n||ma<1) printf("no output\n");
    else{
        if(ma>n) ma=n;
        if(mi<1) mi=1;
        i=mi-1;
        while(i<ma)
        {
            printf("%lg\n",p[i]);
            i++;
        }
    }
}
void release(double* p)
{
    free(p);
}

int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
