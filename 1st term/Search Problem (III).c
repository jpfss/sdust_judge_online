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
//        n=i;
        flag=0;
        for(n=i;n>=0;n--){
            if(firstInput[n]==input){
                printf("%d\n",n+1);
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("NOT FOUND\n");
        }
    }
    return 0;
}
