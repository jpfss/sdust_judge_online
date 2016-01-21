#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 120

int main()
{
    int M,m,n,i,j,k;
    int a[102][102];
    scanf("%d",&M);
    while(M--)
    {
        scanf("%d%d",&m,&n);
        i=0;
        while(i<m)
        {
            j=0;
            while(j<n){
                scanf("%d",&a[i][j]);
                j++;
            }

            i++;
        }
        j=0;
        while(j<n)
        {
            i=0;
            while(i<m)
            {
                if(i)
                printf(" %d",a[i][j]);
                else
                    printf("%d",a[i][j]);
                i++;
            }

                j++;
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
