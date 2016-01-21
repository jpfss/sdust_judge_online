#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s [10010],s1[10010];
    int m,n,k,i,j,count,q;

    scanf("%d",&m);
    while(m--)
    {
        scanf("%d%d",&n,&k);
        //printf("%d%d",n,k);
        getchar();
        q=0;
        while(q<n)
        {
            gets(s);
            j=0,i=0;
            count=0;
            while(i<strlen(s))
            {
                if(isalpha(s[i]))
                {
                    count++;
                    s1[j]=toupper(s[i])+k;
                    //printf();
                    if(s1[j]<'A') s1[j]+=26;
                    if(s1[j]>'Z') s1[j]-=26;
                    j++;
                    //system("pause");
                }
                i++;
                //system("pause");
            }
            s1[j]='\0';
                printf("%d ",count);
                puts(s1);

                //system("pause");
       // }
        //printf("\n");
        q++;
        }
        printf("\n");
}

    return 0;
}
