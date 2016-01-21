#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 120

int main()
{
    int M,m,n,i,j,k,m1,n1;
    int a[110][110];
    while(1)
    {

        scanf("%d%d",&m,&n);
        if(m==n&&n==0) break;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        scanf("%d%d",&m1,&n1);
        if(m1==n1&&n1==0) break;
        //printf("test");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {

                scanf("%d",&k);
                a[i][j]+=k;
            }
        }
        if(m1!=m||n1!=n) {printf("Not satisfied the definition of matrix addition!\n\n");continue;}
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j)
                printf(" %d",a[i][j]);
                else
                    printf("%d",a[i][j]);
            }

                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
