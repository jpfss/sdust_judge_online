#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_STR_LEN  20


int str2num(char input)
{
    return (int)input-48;
}



double  strToDouble(char s[])
{
    double  x=0;
    int i,j=0,f=0,f2=0,f3=0,f4=0;
    if(s[0]=='\n')
        return 0;
    for( i=0;i<strlen(s);i++)
    {
        if((s[i]=='+'||s[i]=='-')&&f3==0&&f4==0)
        {
            if(s[i]=='-') f2=-1;
            f3=1;
        }
       if(s[i]=='.')
       {
            f=1;
            f4=1;
       }

            if(s[i]>='0'&&s[i]<='9')
            {
                 x=x*10+str2num(s[i]);
                 f4=1;
                 j++;
            }
            if(f!=1)
           {
               j=0;
           }
    }
    if(f2!=-1)
        if(s[0]=='-')
        x=-x;
    if(f2==-1)
        x=-x;
    x=x*pow(0.1,j);
    return x;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
