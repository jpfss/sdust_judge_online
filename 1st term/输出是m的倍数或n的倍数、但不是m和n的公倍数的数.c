#include <stdio.h>
int main()
{
    int k,m,n,i=0,j;
    scanf ("%d %d %d",&k,&m,&n);
    for (j=1;j<=k;j++)
    {
        if ((j%m==0&&j%n!=0)||(j%m!=0&&j%n==0))
          {i++;
        if(i==1)
            printf ("%d",j);
        else
            printf (" %d",j);}
    }
}
