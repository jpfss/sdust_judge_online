#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char c;
    char abbr[15],fullname[105];
    int i = 0,j = 0,f = 0,cnt = 0;
    while ((c = getchar()) != EOF)
    {
        //putchar(c);
        if(f == 1 && (c > 'Z' || c < 'A') && c != ' ')
        {
            f = i = 0;
            //printf("test1");
        }
        if (f == 2 && c != '(')
        {
            f= i = 0;
            //printf("test2");
        }
        if (f == 0 && isupper(c))
        {
            abbr[i++] = c;
            f = 1;
        }
        else if (f == 1 && isupper(c))
        {
            abbr[i++] = c;
        }
        else if (f== 1 && c== ' ')
        {
            abbr[i] = 0;
            f= 2;
        }
        if(f == 2 && c == '(')
        {
            f = 3;
        }
        else if (f== 3 && c != ')')
        {
            fullname[j++] = c;
        }
        else if (f == 3 && c == ')')
        {
            //printf("%d\n",cnt);
            //if(cnt==0)printf("test8");
            fullname[j] = 0;
            f = i = j = 0;
            cnt++;
            if (cnt == 1)
            {
                printf("Abbreviation ==> Full Name\n");
            }
            if (cnt >= 1 && cnt < 10)
                printf("%d:%10s ==> %s\n",cnt,abbr,fullname);
            else if(cnt >= 10)
                printf("%d:%9s ==> %s\n",cnt,abbr,fullname);
        }
    }
    if(cnt == 0)
    {
        printf("There is no abbreviations in this text.\n");
    }
    return 0;
}
