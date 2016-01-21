#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_STR_LEN 120
int strToInt(char str[], int base)
{
    int i=0,sum=0;
    if(str[0]=='\0') {
            return 0;}
    else if(str[0]=='+'||str[0]=='-')
        i++;
    if(base!=16)
    while(str[i]!='\0')
    {
        if(!isdigit(str[i])||(str[i]-'0')>=base)
        {
            i++;
            continue;
        }
        //printf("%c",str[i]);
        sum=sum*base+str[i]-'0';
        i++;
    }
    if(base==16)
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='f') str[i]+='A'-'a';
        if(!isdigit(str[i])&&!(str[i]>='A'&&str[i]<='F'))
        {
            i++;
            continue;
        }
        //printf("%c",str[i]);
        if(isdigit(str[i]))
        sum=sum*base+str[i]-'0';
    else
        sum=sum*base+str[i]-'A'+10;
        i++;
    }

    if(str[0]=='-')
        sum=-sum;
    return sum;
}

int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}
