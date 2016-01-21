#include<stdio.h>
#include<string.h>
int main()
{
    int a[101][101];
    int n,x,y,i,j,k;
   while(~scanf("%d",&n))
{

   memset(a,-1,sizeof(a));
       x=0;
       y=n/2;
       for(i=1;i<=n*n;i++)
       {
           if(x<0) x=n-1;
           if(y>n-1) y=0;

           if(a[x][y]!=-1)
           {
               x++;
               y--;
               //printf("%d%d",x,y);

               if(y<0) y=n-1;
           if(x>n-1) x=0;
                x++;
                if(x>n-1) x=0;
                a[x][y]=i;
                //printf("%d%d",x,y);

           }
           else
           {
               a[x][y]=i;
           }
           //printf("    %d %d %d",x,y,i);

           x--;
           y++;

       }
      // printf("\n%d\n",a[0][1]);
      i=0;
       while(i<n)
       {
           j=0;
           while(j<n)
       {
           if(j) printf(" %d",a[i][j]);
           else printf("%d",a[i][j]);

           //printf("%d%d",x,y);
           j++;
       }
       printf("\n");
       i++;
       }
       printf("\n");


   }

}
