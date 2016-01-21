#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,i,j,k=0,f;
    int a[1002]={0},b[1002]={0},c[1002]={0};
    scanf("%d",&n1);
    while(1)
    {
        f=1;
        if(n1==0)f=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(i=0;f;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0) break;
        }
        n1--;
        if(n1==0)f=0;

        for(j=0;f;j++)
        {
            scanf("%d",&b[j]);
            if(b[j]==0) break;
        }
        n1--;
        if(n1==0)f=0;

        if(i<j)
        {
            int t=i;
            i=j;
            j=t;
        }
        for(k=0;k<i;k++)
        {
            c[k]=a[k]+b[k];
            if(k)
                printf(" %d",c[k]);
            else
                printf("%d",c[k]);
        }
        printf("\n");
        if(f==0)
            break;
    }
    return 0;
}

