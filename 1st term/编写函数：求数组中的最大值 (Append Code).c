#include<stdio.h>
#include<string.h>
#define MAX_SIZE 1002
int get_array(int a[])
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        //printf("%d",a[i]);
    }
    return i;
}
int put_array(int a[], int n)
{
    int i,f=0;
    for( i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            if(f==0)
            {
                 printf("%d",a[i]);
                 f++;
            }
            else
                printf(",%d",a[i]);

        }

    }
    return 0;
}
int max_value(int a[], int n)
{
    int max=a[0],f=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max){max=a[i];f=i;}
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
    int max=a[0],f=0,i;
    memset(idx,-1,sizeof(idx));

    for(i=0;i<n;i++)
    {
        if(a[i]>max){max=a[i];}
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==max){idx[i]=i;}
        else idx[i]=-1;
    }
}


int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
