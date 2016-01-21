#include<stdio.h>
#include<string.h>
#define  MAX_SIZE  1001
int m=0;
int getkey(int key[])
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&key[i]);
    }
    return n;
}
int getarray(int array[])
{
    m=0;
    int i=0;
    while(1)
    {
        scanf("%d",&array[i]);
        if(array[i]==0)
        {break;}
        i++;
    }
    m=i;
    return 0;
}
int insert(int array[], int key, int vol)
{
    int i=0,n=0,p=0,k=0;
    while(array[i]!=0) { i++; ++n; }
    if(n>=vol) {
        return -2;
    } else {
        for(i=0; i<n; i++) {
            if(key==array[i]) {
                k=1;
                return -1;
            }
        }
        if(k==0) {
            while(array[p]<key&&p<n) {
                p++;
            }
            for(i=n+1; i>p; i--) {
                array[i]=array[i-1];
            }
            array[p]=key;
            n++;
            return p;
        }
    }
}

int result(int flag)
 {
     if(flag==-2)
        printf("The array if full!\n");
        else
     if(flag==-1)
        printf("The key is already in this array!\n");
        else
            printf("The key is inserted in position %d.\n",flag);

 }
/**
int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}**/
