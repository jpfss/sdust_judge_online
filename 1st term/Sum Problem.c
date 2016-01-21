#include<stdio.h>
int main()
{

   int inCount;
   while(scanf("%d",&inCount)!=EOF){
   int i=0;
   int input,sum;
   while(i<inCount)
   {
       i++;
       scanf("%d",&input);
       if(i==1)
       {
           sum = input;
       }else
       {
           sum = sum + input;
       }

   }
   printf("%d\n",sum);
   }



    return 0;
}
