#include<stdio.h>
/*

 客户去商店买东西时，不超过100美金的账单喜欢用现金支付。商店喜欢用最少的钞票给付客户的找零。请你编写一个程序帮助商店计算出：当客户买了x元商品给了一张100美元的钞票后，商店应该付给客户多少张20美元、10美元、5美元和1美元的钞票，使得钞票总数最少。假设不存在其他面值的钞票，也不会有几角几分的价格，商店的各种钞票总是够用的。

*/
int main()
{
    int input,twenty,ten,five,rest,tmp;
    scanf("%d",&input);

    rest = 100 - input;
    twenty = rest / 20;
    rest = rest - (twenty*20);
    //for debug printf("%d\n",rest);
    ten = rest / 10;
    rest = rest - (ten*10);
    five = rest / 5;
    rest = rest - (five*5);

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d",twenty,ten,five,rest);


    return 0;
}
