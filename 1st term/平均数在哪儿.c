#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int judge(int n){
        int m,a[200001],i,j,sum=0,f,k;
        while(n--)
    {
        f=0;
        sum=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        double x=(double)sum;
        x=x/m;
        //printf("%f",x);
        for(i=0;i<m;i++)
        {
            if(x<a[i]+0.0001&&x>a[i]-0.0001)
            {
                 a[i]=-1;
                 f++;
            }
            //printf("%d",a[i]);
        }
        printf("%d\n",f);
         k=0;
        for(i=0;i<m;i++)
        {
            if(a[i]==-1)
            {
                if(!k)
                {
                     printf("%d",i+1);
                     k++;
                }
                else
                    printf(" %d",i+1);

            }
        }
        if(f)
        printf("\n");
    }
    return 0;

}
//整理结构。。。。。。
int main()
{
    int n,m,a[200001],i,j,sum=0,f,k;
    scanf("%d",&n);
    judge(n);
    return 0;
}
