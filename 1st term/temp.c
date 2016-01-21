#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX_STR_LEN  20





#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX_STR_LEN 20

int strToDouble(char s[])
{
    double x=0;
    int i,j=0,f=0;
    if(s[0]=='\n')
        return 0;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='.')
            f=1;
        if(s[i]>='0'&&s[i]<='9'){
            x = x*10+s[i]-'0';
        }
    }
}

int str2num(char input)
{
    return (int)input+48;
}






double  strToDouble(char s[])
{
    double  x=0;
    int i,j=0,f=0;
    if(s[0]=='\n')
        return 0;
    for( i=0;i<strlen(s);i++)
    {
 
       if(s[i]=='.')
        f=1;
            if(s[i]>='0'&&s[i]<='9')
            {
                 x=x*10+s[i]-'0';
                 j++;
            }
            if(f!=1)
           {
               j=0;
           }
    }
    if(s[0]=='-')
        x=-x;
    x=x*pow(0.1,j);
    //printf("%lg",x);
    return x;
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
