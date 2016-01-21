#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[1002]={0},b[1002]={0},c[1002]={0};
    int i,n1=0,n2=0,j,k,t;
    scanf("%d",&n);
    int p=n;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            memset(a,0,sizeof(a));
            scanf("%d",&n1);
            for(j=0;j<n1;j++)
            {
                scanf("%d",&a[j]);
            }
        }
        if(i%2==0)
        {
            memset(b,0,sizeof(b));
            scanf("%d",&n2);
            for(k=0;k<n2;k++)
            {
                scanf("%d",&b[k]);
            }
        }
         if(n1<n2)
        {
             t=n2;
        }
        else
        {
             t=n1;
        }
        if(i>1)
        {
            for(j=0;j<t;j++)
        {
            c[j]=a[j]+b[j];
            if(j)
                printf(" %d",c[j]);
            else
                printf("%d",c[j]);
        }
        printf("\n");
        }
        if(i==n&&p%2==1)
        {
            for(j=0;j<n1;j++)
        {

            if(j)
                printf(" %d",a[j]);
            else
                printf("%d",a[j]);
        }

            printf("\n");
        }
         if(i==n&&p%2==0)
        {
            for(j=0;j<n2;j++)
        {

            if(j)
                printf(" %d",b[j]);
            else
                printf("%d",b[j]);
        }

            printf("\n");
        }

    }
    return 0;
}
