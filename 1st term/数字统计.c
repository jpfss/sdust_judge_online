#include<stdio.h>
int main()
{
    int count;
    scanf("%d",&count);
    int input[200000+2]={0};
    int i,tmp;
    for(i=0;i<count;i++){
        scanf("%d",&tmp);
        input[tmp-1]++;
    }
    tmp = i-1;
    int tmpNum=1;
    for(i=0;i<tmp;i++){
        if(tmpNum<input[i]){
            tmpNum = input[i];
        }
    }
    printf("%d\n",tmpNum);
    return 0;
}
