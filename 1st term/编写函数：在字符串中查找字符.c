#include<stdio.h>
#define MAX_STR_LEN 1002
int str_chr(char s[],char ch)
{
    int length;

    for(length=0;s[length]!='\0';length++){
        //system("pause");
        if(s[length]==ch)
            return length;
    }


    return -1;

}



int main()
{
    char ch;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
    {
        ch = getchar();
        printf("%d\n", str_chr(s, ch));
        gets(s); // 仅用于读出字符后的换行符，以确保while循环内gets读到正确的数据，无其他意义，于理解题意无关。
    }
    return 0;
}
