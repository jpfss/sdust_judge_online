#include<stdio.h>
int main()
{
    int  input;
    scanf("%d",&input);
    int hangshu=1;
    int spaceNum;
    int countX=0;
    int starNum;
    int i=0;
    spaceNum = input-1;

    while(hangshu<=input){
        while(countX<spaceNum){
            countX++;
            printf(" ");
        }
        starNum = hangshu*2-1;
        while(i<starNum){
            printf("+");
            i++;
        }
        printf("\n");
        hangshu++;
    }
    return 0;
}
