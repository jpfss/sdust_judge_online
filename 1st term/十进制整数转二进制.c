#include<stdio.h>
void getBin(int input)
{
    int a=1,i=0;
    int store[30];
    while(a!=0){
        a = input/2;
        store[i] = input%2;
        i++;
        input = a;
    }
    i--;
    for(;i>=0;i--){
        printf("%d",store[i]);
    }
    printf("\n");
}

int main()
{
    int input;
    //int store[18];

    while(scanf("%d",&input)!=EOF){
        getBin(input);
    }
    return 0;
}
