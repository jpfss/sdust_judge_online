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

    int input;//,n;
    while(scanf("%d",&input)!=EOF){
        if(input>0){
            if(input-1>countX){
                printf("OUT OF RANGE\n");
            }else{
                printf("%d\n",firstInput[input-1]);
            }
        }else if(input<0){
            input=-input;
            if(countX-input>=0){
                printf("%d\n",firstInput[countX-input]);
            }else{
                printf("OUT OF RANGE\n");
            }
        }
    }




    return 0;
}
