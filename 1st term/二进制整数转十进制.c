#include<stdio.h>
#include<string.h>
int length(char input[])
{
    int i;
    for(i=0;;i++){
        if(input[i]=='\0'){
            break;
        }
    }
    return i;
}
int main()
{
    unsigned long long int  a,sum=0,k=0;
    char input[100];
    unsigned long long int i=0;
        while(gets(input)!=NULL)
        {
            sum=0;
            int n=length(input);
            int m=n;

            for(i=0;i<m;i++)
            {
                n--;
                if(i<=30||input[0]=='0')
                {
                    sum+=(input[n]-'0')*(1<<i);
                }
                else
                {
                    //·´Âë
                    sum=sum+2147483648;
                }
           }
           printf("%llu\n",sum);
        }
    return 0;
}
