#include<stdio.h>
int a[550000]={0};
void spc(){
    printf("\n");
}
int main()
{
    int i,j;
    a[1]=-1;
    for(i=2;i<=500000;i++)
    {
        if(a[i]!=-1)
            for(j=2;i*j<=500000;j++)
            {
                a[i*j]=-1;
            }
    }
            int m,n,f;
            while(scanf("%d%d",&m,&n)!=-1)
            {
                f=0;
                for(;m<=n;m++)
                    if(a[m]!=-1)
                {
                        printf("%d\n",m);
                        f=1;
                }
               if(f==0) {
                    spc();
               }

               spc();
            }

    return 0;
}
