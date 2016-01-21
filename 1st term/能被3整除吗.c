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
    char input[150];
    int sum;
    int countY;
    scanf("%d",&countY);
    getchar();
    int i;
    for(i=0;i<countY;i++){

        gets(input);
        sum=0;
        int n =length(input);
        int m;
        for(m=0;m<n;m++)
        {
            if(input[m]>='0'&&input[m]<='9');
            sum+=input[m]-'0';
        }
        if(sum%3==0)
            printf("Yes");
        else
            printf("No");
        printf("\n");
    }
    return 0;
}

