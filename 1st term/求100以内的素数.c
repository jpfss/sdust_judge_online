#include <stdio.h>
int main()
{
    int a,b,i,j,x;
    scanf("%d %d",&a,&b);
    printf("=====\n");
    for(i=b;i>=a;i--)//输出先大后小。。。。。坑
    {   x=0;
        for(j=1;j<i;j++)
        if(i%j==0)
        x++;
        if(x==1)
            printf("%d\n",i);

    }
     printf("=====");
}
