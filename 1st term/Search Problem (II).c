#include<stdio.h>

int main()
{
    int input[10001];
    int countX,i;
    scanf("%d",&countX);
    for(i=0;i<countX;i++){
        scanf("%d",&input[i]);
    }



    int  forNum,n,flag;//=0;
    while(scanf("%d",&forNum)!=EOF){
        flag=0;
        for(n=0;n<countX;n++){
            if(input[n]==forNum){
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
