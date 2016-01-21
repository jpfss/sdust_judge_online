#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 20
int strToInt(char str[])
{
    int i=0,sum=0;
    if(str[0]=='\0'){
        return 0;
    }else if(str[0]=='+'||str[0]=='-'){
    i++;
    }
        //i++;
    while(str[i]!='\0')
    {
        if(!isdigit(str[i]))
        {
            i++;
            continue;
        }
        sum=sum*10+str[i]-'0';
        i++;
    }
    if(str[0]=='-')
        sum=-sum;
    return sum;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
