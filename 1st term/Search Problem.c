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

    i=0;
    while(scanf("%d",&i)!=EOF){
          //i++;
//          if(firstInput[i-1]!='\0'){
//            printf("%d\n",firstInput[i-1]);
//          }else if(firstInput[i-1]==0){
//            printf("%d\n",firstInput[i-1]);
//          }else{
//            printf("OUT OF RANGE\n");
//            }
          if(i<=countX){
            printf("%d\n",firstInput[i-1]);
          }else{
            printf("OUT OF RANGE\n");
            }



          }



    return 0;
}
