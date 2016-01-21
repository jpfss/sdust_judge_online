#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX_STR_LEN  20

int str2num(char input)
{
    return (int)input-48;
}



double  strToDouble(char str[])
{
    double  x=0;
    int i,j=0,f=0;
    if(str[0]=='\n')
        return 0;
    for( i=0;i<strlen(str);i++)
    {

       if(str[i]=='.')
        f=1;
            if(str[i]>='0'&&str[i]<='9')
            {
                 x=x*10+str2num(str[i]);
                 j++;
            }
            if(f!=1)
           {
               j=0;
           }
    }
    if(str[0]=='-')
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
