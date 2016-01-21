#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX_STR_LEN 102

char * trim(char *s)
{
    char tmp[MAX_STR_LEN];
    strcpy(tmp,s);
    int len = strlen(tmp);
    //printf("%d %d %c==",tmp,len,*(tmp+len));tmp+len÷∏œÚ\0£ª
    char * p;
    p = tmp+len-1;
    while(isspace(*p)){
        p--;
    }
    *(p+1) = '\0';
    p = tmp;

    while(isspace(*p)){
        p++;
    }
    strcpy(s,p);
    return s;
}


int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        int le = strlen(p);
        int i=0;
        for(;i<le;i++)
        {
            printf("%c",p[i]);
        }printf("8\n");
    } while(strcmp(p, "END"));
    return 0;
}
