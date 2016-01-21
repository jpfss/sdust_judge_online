#include<stdio.h>
#include<string.h>
//int length(char input[])
//{
//    int i;
//    for(i=0;;i++){
//        if(input[i]=='\0'){
//            break;
//        }
//    }
//    return i;
//}

int main()
{
    int n1,n2,i,k=0;
    int a[1002]={0},b[1002]={0},c[1002]={0};
    while(1)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        if(scanf("%d",&n1)==-1)
            break;
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
        }

       if(scanf("%d",&n2)==-1)
       {
           n2=0;
            k=1;
       }
        for(i=0;i<n2;i++)
        {
            scanf("%d",&b[i]);
        }
        if(n1<n2)
        {
            int t=n1;
            n1=n2;
            n2=t;
        }
        for(i=0;i<n1;i++)
        {
            c[i]=a[i]+b[i];
            if(i)
                printf(" %d",c[i]);
            else
                printf("%d",c[i]);
        }
        printf("\n");
        if(k)
            break;
    }
    return 0;
}
