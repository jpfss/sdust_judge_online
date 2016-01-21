#include<stdio.h>
int main()
{
    int firstInput[10000];
    //,secondInput[1001];
    int countX,i;

    scanf("%d",&countX);
    for(i=0;i<countX;i++){
        scanf("%d",&firstInput[i]);
    }

    int input,n,flag;
    while(scanf("%d",&input)!=EOF){
        flag=0;
        for(n=0;n<countX;n++){
            if(firstInput[n]==input){
                if(flag==0){
                    printf("%d",n+1);
                    flag=1;
                }else{
                    printf(" %d",n+1);
                    flag=1;
                }
            }
        }
        if(flag==0){
            printf("NOT FOUND\n");
        }else{
            printf("\n");
            }
    }

    return 0;
}
