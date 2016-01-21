#include<stdio.h>

int main()
{
    int m,n,x,y;
    scanf("%d%d",&m,&n);//取得头数和腿数，m为头数，n为腿数

//    实现过程：
//    假设全部为鸡，则m乘以2为应该的腿数，那么n-(m*2)这个差值
//    是因为假设的存在而出现的，即实际兔子数的两倍。头数减兔子
//    数即为鸡数。

    x = n/2-m;
    y = m-x;

    if(x+y!=m||x<0||y<0){
        printf("你在逗我。") ;
    }else{
    printf("兔子的数量为：%d\n", x);
    printf("鸡的数量为：%d",y);
    }
    return 0;
}
