#include<stdio.h>
void count(int storeNum)
{
    int i,input,stepNum;
    int maxStore,miniStore;
    scanf("%d",&input);
    maxStore = input;
    miniStore = input;
    for(i=1;i<storeNum;i++){
        scanf("%d",&input);
        if(input>maxStore){
            maxStore = input;
        }else if(input<miniStore){
            miniStore = input;
        }
    }
    stepNum = (maxStore - miniStore)*2;
    printf("%d\n",stepNum);
    //return 0;
}

int main()
{
    int storeNum;
    while(1)
    {
        scanf("%d",&storeNum);
        if(storeNum==0)
            break;
        count(storeNum);
    }
    return 0;
}
