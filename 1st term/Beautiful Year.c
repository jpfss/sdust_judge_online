#include<stdio.h>

int main()
{
    int a,b,c,d;
    int input;
    while(scanf("%d",&input)!=EOF){

    while(1){
        input++;
        a = input/1000;
        b = input%1000/100;
        c = input%100/10;
        d = input%10;
        //printf("%d %d %d %d",a,b,c,d);
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            break;
        }
    }
    printf("%d\n",input);
    }

    return 0;
}
