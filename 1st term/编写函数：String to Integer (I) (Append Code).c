#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 20
int strToInt(char str[])
{
    int i=0,sum=0;
    //system("pause");
    //printf("str[]%c",str[0]);
    if(str[0]=='\0'){
        return -1;
    }else if(!isdigit(str[0])){
        return 0;
    }
    while(isdigit(str[i]))
    {
        sum=sum*10+str[i]-'0';
        i++;

    }
    return sum;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
