#include<stdio.h>
#include<string.h>


int main()
{
    int countY;
    scanf("%d",&countY);
    int i;
    int length;
    int a[1];
    gets(a);
    for(i=0;i<countY;i++)
    {
        //length = getCharsLength();
        char input[1000+2];
        gets(input);
        length = strlen(input);
        printf("case %d:length=%d.\n",i+1,length);
    }
    return 0;
}
