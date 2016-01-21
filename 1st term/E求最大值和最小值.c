#include <stdio.h>
#include <string.h>
//#define nnn 2000
char s[2002]={0};
char maxn[2002]={0};
char minn[2002]={0};
char a[2002]={0};

int main()
{
    int i,fmax=-1,fmin=999,l,m,x;
    while(scanf("%s",s)!=EOF)
    {
        memset(a,0,sizeof(a));

        for(i=0;i<strlen(s);i++)
            a[i]=s[strlen(s)-1-i];
          //printf("%d",i);


        memset(s,0,sizeof(s));
        i=strlen(a)-1;
        while(a[i]=='0')
        {

          // printf("%c",a[i]);
            a[i]=0;
            i--;

        }

        i=strlen(a)-1;
        if(i>fmax) {memset(maxn,0,sizeof(maxn));strcpy(maxn,a);fmax=strlen(maxn)-1;}
        if(i==fmax)
        {
             m=i;
            while(m>=0&&a[m]==maxn[m]) m--;
            if(m!=-1&&a[m]>maxn[m]) {memset(maxn,0,sizeof(maxn));strcpy(maxn,a);fmax=strlen(maxn)-1;}
            if(m==-1&&a[0]>maxn[0]) {memset(maxn,0,sizeof(maxn));strcpy(maxn,a);fmax=strlen(maxn)-1;}
        }
        if(i<fmin) {memset(minn,0,sizeof(minn));strcpy(minn,a);fmin=strlen(minn)-1;}
        if(i==fmin)
        {
             m=i;
            while(m>=0&&a[m]==minn[m]) m--;
            if(m!=-1&&a[m]<minn[m]) {memset(minn,0,sizeof(minn));strcpy(minn,a);fmin=strlen(minn)-1;}
            if(m==-1&&a[0]<minn[0]) {memset(minn,0,sizeof(minn));strcpy(minn,a);fmin=strlen(minn)-1;}
        }
    }
    if(fmax==-1) printf("The maximum value is : 0\n");
        else
    {
        printf("The maximum value is : ");
        for(x=fmax;x>=0;x--)
            printf("%c",maxn[x]);
        printf("\n");
    }
    if(fmin==-1) printf("The minimum value is : 0" )  ;
        else
    {
        printf("The minimum value is : ");
        for(x=fmin;x>=0;x--)
            printf("%c",minn[x]);

    }
    return 0;
}
