#include<stdio.h>
#include<string.h>
void p2(char c,char c2,char c3,int s,int f)
{
    int i;
        printf("%c",c);
        for(i=0;i<s;i++)
            printf("%c",c2);
        printf("%c",c3);
        if(f==0) printf(" ");
        //else print1("");
}
void print1(int a,int s ,int f)
{
    if(a==0||a==2||a==3||a==5||a==6||a==7||a==8||a==9) p2(' ','-',' ',s,f);
    if(a==1||a==4) p2(' ',' ',' ',s,f);
}
void print2(int a,int s ,int f)
{
        if(a==1||a==2||a==3||a==7) p2(' ',' ','|',s,f);
        if(a==4||a==8||a==9||a==0) p2('|',' ','|',s,f);
        if(a==5||a==6) p2('|',' ',' ',s,f);
}
void print3(int a,int s ,int f)
{
    if(a==1||a==7||a==0) p2(' ',' ',' ',s,f);
    if(a==2||a==3||a==4||a==5||a==6||a==8||a==9)p2(' ','-',' ',s,f);
}
void print4(int a,int s ,int f)
{
        if(a==1||a==5||a==3||a==7||a==9||a==4) p2(' ',' ','|',s,f);
        if(a==6||a==8||a==0) p2('|',' ','|',s,f);
        if(a==2) p2('|',' ',' ',s,f);
}
void print5(int a,int s ,int f)
{
    if(a==1||a==4||a==7) p2(' ',' ',' ',s,f);
    else p2(' ','-',' ',s,f);
}
int main()
{

   char  n[10];
   int s;
   while(~scanf("%lld%s",&s,n))
   {
       if(s==0) break;
       int a,i,j,f=0;
       for(i=0;i<strlen(n);i++)
       {
           if(i==strlen(n)-1) f=1;
           else f=0;
           a=n[i]-'0';
           print1(a,s,f);
       }
       puts("");
       for(j=0;j<s;j++)
       {
            for(i=0;i<strlen(n);i++)
            {
                if(i==strlen(n)-1) f=1;
           else f=0;
                a=n[i]-'0';
                print2(a,s,f);
            }
            puts("");
       }
       for(i=0;i<strlen(n);i++)
       {
           if(i==strlen(n)-1) f=1;
           else f=0;
           a=n[i]-'0';
           print3(a,s,f);
       }
       puts("");
       for(j=0;j<s;j++)
       {
            for(i=0;i<strlen(n);i++)
            {
                if(i==strlen(n)-1) f=1;
           else f=0;
                a=n[i]-'0';
                print4(a,s,f);
            }
            puts("");
       }
       for(i=0;i<strlen(n);i++)
       {
           if(i==strlen(n)-1) f=1;
           else f=0;
           a=n[i]-'0';
           print5(a,s,f);
       }
       puts("");
       puts("");
   }
    return 0;
}

