#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s [1002];
    char *p1,*p2;
    int i,j,k;
    while(gets(s)!=NULL)
    {
        p1=s;
        p2=s+strlen(s)-1;
        int f=0;
        while(p1<p2)
        {
            while(!isdigit(*p1)&&!isalpha(*p1)) p1++;
            while(!isdigit(*p2)&&!isalpha(*p2)) p2--;
            *p1=toupper(*p1);
            *p2=toupper(*p2);
            if(*p1!=*p2){
                f=1;
                break;
                }
            p1++;
            p2--;
        }
        if(f==1) printf("No.\n");
        else printf("Yes.\n");

    }
    return 0;
}
