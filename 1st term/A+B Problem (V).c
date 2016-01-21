#include<stdio.h>
int put_int_sum(int a,int b)
{
    if(a==0&&b==0){
        return 0;
    }else{
        printf("%d\n",a+b);
        }


    //printf("%d\n",a+b);
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
