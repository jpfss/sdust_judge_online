#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 103
char * str_rev(char *t,char *s)
{
    int length = strlen(s);
    int i=0;
    for(;i<length;i++){
        //*(t+length-i-1) = *(s+i);
        *(t+i) = *(s+length-i-1);
    }
    *(t+i) = '\0';

    return t;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}

