#include<stdio.h>
#include<string.h>

int main()
{
    char input0[20],input1[20];
    int length0,length1;
    gets(input0);
    gets(input1);

    length0 = strlen(input0);
    length1 = strlen(input1);

    if(length0>=length1){
        puts(input0);
        puts(input1);
    }else{
        puts(input1);
        puts(input0);
        }
    return 0;
}
