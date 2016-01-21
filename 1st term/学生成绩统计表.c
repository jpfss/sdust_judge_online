#include<stdio.h>
char s[500000];
int main()
{
    double a[53][12];
    char s2[20];
    int m,n,i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    //getchar();
    printf("name    ");
    scanf("%s",s);
    for(j=0;j<n;j++)
    {
        scanf("%s",s);
        printf("  %5s",s);
    }
    printf("    sum\n");
   for(i=0;i<m;i++)
   {
       scanf("%s",s);
       printf("%-8s",s);
       double sum =0;
       for(j=0;j<n;j++)
       {
           scanf("%lf",&a[i][j]);
           sum=sum+a[i][j];
           //printf("%lf\n",sum);
           printf("  %5.1lf",a[i][j]);
       }
       printf("  %5.1lf\n",sum);

   }
   printf("average ");
for(j=0;j<n;j++)
       {
           double sum=0;
           for(i=0;i<m;i++)
            {
                sum+=a[i][j];
                //printf("%d\n",sum);
            }
            printf("  %5.1lf",sum/m);
       }
       printf("\n");
       return 0;
}
