#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 111

int judge(int i,char s1[],char s2[])
{
    if(s1[i]!='\0'||s2[i]!='\0'){
        return 1;
    }
    return 0;
}
int str_cmp(char s1[], char s2[])
{
    int i;
    for(i=0;judge(i,s1,s2)==1;i++)
    {
        if(s1[i]<='z'&&s1[i]>='a'&&s1[i]-32==s2[i]) {s1[i]-=32;}
        if(s2[i]<='z'&&s2[i]>='a'&&s2[i]-32==s1[i]) {s2[i]-=32;}
        if(s1[i]-s2[i]!=0) return s1[i]-s2[i];
    }
    return 0;
}


int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
