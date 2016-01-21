#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[1111];
    int a[5];
    while(gets(s)!=NULL)
    {
        int i=0,sum=0,j,m,f=0;
        while(i<strlen(s)){
            if(!isdigit(s[i]))
            {
                if(s[i]=='.')  {a[sum]=i;sum++;}
                else
                    {
                        f=1;
                        printf("NO\n");
                        break;
                    }
            }
            i++;
        }


        if(f==1)continue;
        //printf("%d",sum);
        if(a[0]==0||a[1]==a[0]+1||a[2]==a[1]+1)   {printf("NO\n");continue;}
        if(strlen(s)>15) {printf("NO\n");continue;}
        if(a[0]>3||a[1]-a[0]>4||a[2]-a[1]>4||strlen(s)-1-a[2]>3)
            {printf("NO\n");continue;}
        if(sum!=3) {printf("NO\n");continue;}
            if(s[a[2]+1]==0) {printf("NO\n");continue;}
            int  c=0;
            j=0;
            for(m=0;m<3;m++)
            {
                c=0;
                while(j<a[m])
                {
                    c=c*10+s[j]-'0';
                    j++;
                }
                //printf("%d",c);
                j++;
                if(c>255||c<0){f=1;printf("NO\n");break;}
            }
            if(f==1)continue;
            c=0;
            j=a[2]+1;
            while(j<strlen(s))
            {
                c=c*10+s[j]-'0';
                j++;
            } //printf("%d",c);
            if(c>255||c<0){printf("NO\n");continue;}

             printf("YES\n");


    }
    return 0;
}
