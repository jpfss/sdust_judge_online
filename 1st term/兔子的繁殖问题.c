#include<stdio.h>
int main()
{
    int n,a,i,b[45];

    b[0]=1;
    b[1]=2;
    for(i=2;i<45;i++)
    {
        b[i]=b[i-1]+b[i-2];
    }
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        printf("%d\n",b[a-1]);
    }
    return 0;
}

