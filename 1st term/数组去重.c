#include<stdio.h>

int Print()
{
    int count;
    int input[1001];

    scanf("%d",&count);

    int i;
    for(i=0;i<count;i++){
        scanf("%d",&input[i]);
    }

    int j,temp;
    for(i=1;i<count;i++){
        for(j=0;j<count-1;j++){

            if(input[j]>input[j+1]){
                temp = input[j];
                input[j]= input[j+1];
                input[j+1] = temp;
            }
        }
    }


    for(i=0;i<count;i++){
        if(i==0){
            printf("%d",input[i]);
        }else if(input[i]!=input[i-1]){
            printf(" %d",input[i]);

        }
    }
    //printf("")

    return 0;
}

int main()
{
    int countY;
    scanf("%d",&countY);
    int i;
    for(i=0;i<countY;i++){
        Print();
        if(i!=countY-1){
            printf("\n");
        }
    }
    return 0;
}
