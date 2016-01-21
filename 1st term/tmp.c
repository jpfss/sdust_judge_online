#include<stdio.h>
#define MAX_SIZE 1002

int get_array(int array[])
{
    int count;
    scanf("%d",&count);
    int i;
    for(i=0;i<count;i++){
        scanf("%d",&array[i]);
    }
    return count;
}
int reverse_array(int array[],int size)
{
    int tmp[MAX_SIZE];
    int i;
    for(i=0;i<size;i++)
    {
        tmp[i]=array[size-i-1];
    }
    for(i=0;i<size;i++)
    {
        array[i]=tmp[i];
    }
    return 0;
}
int put_array(int array[],int size)
{
    int i;
    printf("%d",array[0]);
    for(i=1;i<size;i++){
        printf(" %d",array[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
