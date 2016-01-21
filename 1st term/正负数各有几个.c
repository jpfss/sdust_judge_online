#include<stdio.h>
int main(void)
{
    int count;
    scanf("%d",&count);
    int i;
    int plus=0;
    int minus=0;
    int temp;
    for(i=0;i<count;i++){
        scanf("%d",&temp);
        if(temp>0)plus++;
        else if(temp<0)minus++;
    }
    printf("%d %d",plus,minus);
    return 0;
}
