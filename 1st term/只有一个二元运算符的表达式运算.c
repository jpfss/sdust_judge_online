#include<stdio.h>
int main()
{
    int a,c;
    char b;
    while(1){
        scanf("%d%c%d",&a,&b,&c);
        if(a==0&&c==0&&b==' '){
           break;
        }
        switch(b)
        {
            case '+':printf("%d\n",a+c);break;
            case '-':printf("%d\n",a-c);break;
            case '*':printf("%d\n",a*c);break;
            case '/':printf("%d\n",a/c);break;
            case '%':printf("%d\n",a%c);break;
            default:printf("invalid op\n");
        }

    }
    return 0;
}
