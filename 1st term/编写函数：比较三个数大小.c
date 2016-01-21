#include<stdio.h>
int compare(int *min, int *mid, int *max)
{
    int a=*min;
    int b=*mid;
    int c=*max;
    int t;
    if(a>b){
        t=a;
        a=b;
        b=t;                                          //如果输入的是6 8 2；
    }                                                 //第一次if不满足，未执行
    if(a>c){                                          //第二次if：6>2，所以t=6,a=2,b=8,c=6
        t=a;                                          //第三次if：8>6，所以y=8,a=2,b=c,c=8
        a=c;
        c=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }
    *min = a;
    *mid = b;
    *max = c;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
