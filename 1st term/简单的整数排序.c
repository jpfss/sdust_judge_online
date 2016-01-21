#include<stdio.h>

int main()
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
        printf("%d",input[i]);
        if(i!=count-1){
            printf(" ");
        }
    }
    //printf("")

    return 0;
}
