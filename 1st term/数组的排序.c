#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 1002
int cmp(const void*a,const void *b)
{
     return   *(int *)a-*(int *)b;
}
int get_array(int a[])
{
    int i=0;
    while(scanf("%d",&a[i])!=-1)
    i++;
    return i;
}
int put_array(int a[], int n)
{
    int i,f=0;
    printf("%d",a[0]);
    for( i=1;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
int sort_array(int a[], int n)
{
    qsort(a,n,sizeof(int),cmp);
}

int main()
{
    int array[MAX_SIZE], size;

    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);

    return 0;
}

