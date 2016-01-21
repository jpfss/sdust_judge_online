#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[1111];
    while(gets(s)!=NULL)
    {
        int i=0,sum=0;
        while(i<strlen(s))
        {
            if(i==0&&isalpha(s[i])) sum++;
            if(i>0)
            if(isalpha(s[i])&&!isalpha(s[i-1]))
                sum++;
            i++;
        }
        printf("%d\n",sum);
    }
    return 0;
}

