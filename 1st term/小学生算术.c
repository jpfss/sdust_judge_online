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
    //freopen("1.txt", "w", stdout);

            char s1[1000],s2[1000];
            char *p1,*p2;
            int n;
            while(scanf("%s%s",s1,s2)!=-1)
            {
               p1=s1+length(s1)-1;
               p2=s2+length(s2)-1;
               if(length(s1)>length(s2)){n=length(s1);}
               else  n=length(s2);
               int k=0,c=0,m;
                //n++;
               while(n--)
               {
                    if(k==0)
                    {
                         if(p1>=s1&&p2>=s2)
                     m=*p1+*p2-'0'*2;
                    else
                    {
                        if(p1<s1)
                        m=*p2-'0';
                        else
                            m=*p1-'0';
                    }
                    }
                   else
                   {
                        if(p1>=s1&&p2>=s2)
                     m=1+*p1+*p2-'0'*2;
                    else
                    {
                        if(p1<s1)
                        m=1+*p2-'0';
                        else
                            m=1+*p1-'0';
                            //printf("%c \n",*m);
                   }
                   }

                    //printf("%c \n",*m);
                   if(m>9)
                   {
                       k=1;
                       c++;
                   }
                   else
                   {
                       k=0;
                   }
                   p1--;
                   p2--;
                   //printf("%c %c================\n",*p1,*p2);
               }
               printf("%d\n",c);

            }

    return 0;
}
