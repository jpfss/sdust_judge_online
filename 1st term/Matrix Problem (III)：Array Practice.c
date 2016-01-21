#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,x=0,c[200][200];
    int a[200][200]={0},b[200][200]={0};
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
            while(scanf("%d%d",&k,&l)!=EOF)
            {

                if(k!=0||l!=0)
                {
                    for(i=0;i<k;i++)
                        for(j=0;j<l;j++)
                            scanf("%d",&b[i][j]);
                        x++;
                        if(n!=k)
                        {
                            if(x!=1)
                                printf("\n");
                            printf("Not satisfied the definition of matrix multiplication!\n");
                            m=k;
                            n=l;
                            memset(a,0,sizeof(a));
                                for(i=0;i<m;i++)
                                    for(j=0;j<n;j++)
                                        a[i][j]=b[i][j];
                        }
                        else
                        {
                            memset(c,0,sizeof(c));
                                for(i=0;i<m;i++)
                                    for(j=0;j<l;j++)
                                    {
                                        for(k=0;k<n;k++)
                                            c[i][j]=c[i][j]+a[i][k]*b[k][j];
                                    }
                                    memset(a,0,sizeof(a));
                                        n=l;
                                        if(x>1)
                                            printf("\n");
                                        for(i=0;i<m;i++)
                                        {
                                            for(j=0;j<n;j++)
                                            {
                                                if(j!=0)
                                                    printf(" ");
                                                printf("%d",c[i][j]);
                                                a[i][j]=c[i][j];
                                                //printf("%d=====%d",i,j);
                                                //system("Pause");
                                            }
                                            printf("\n");
                                        }
                        }
                }
                if(k==0&&l==0)
                    break;
                    //printf("\n");
            }
}
