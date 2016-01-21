#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 102
void println(int _case)
{
    char s[LEN];
    gets(s);
    //system("PAUSE");
    int len = strlen(s);
    int digits = 0;
    int lowers = 0;
    int uppers = 0;
    int others = 0;
    int i;
    for(i=0;i<len;i++){
        if(isdigit(s[i]))
            digits++;
        else if(islower(s[i]))
            lowers++;
        else if(isupper(s[i]))
            uppers++;
        else
            others++;
    }
    if(_case==1){
        printf("Case Digits Lowers Uppers Others\n");
    }
    printf("%-5d%-7d%-7d%-7d%d\n",_case,digits,lowers,uppers,others);

}
int main()
{
    int countY;
    scanf("%d",&countY);
    getchar();
    int i;
    for(i=0;i<countY;i++){
        println(i+1);
    }

    return 0;
}
