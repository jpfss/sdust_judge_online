#include<stdio.h>
int main()
{
    int input;
    while(scanf("%d",&input)!=EOF){
        if(input>100||input<0){
            printf("Error\n");
        }else{
        input = input/10;
        switch(input){
        case 10:printf("Excellent\n");break;
        case 9:printf("Excellent\n");break;
        case 8:printf("Good\n");break;
        case 7:printf("Average\n");break;
        case 6:printf("Pass\n");break;
        case 5:printf("Failing\n");break;
        case 4:printf("Failing\n");break;
        case 3:printf("Failing\n");break;
        case 2:printf("Failing\n");break;
        case 1:printf("Failing\n");break;
        case 0:printf("Failing\n");break;
                      }
    }
    }
    return 0;
}
