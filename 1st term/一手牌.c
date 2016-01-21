#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char num;
    char color;
}pocker;

int cmp(const void* a,const void* b){
    pocker aa = *((pocker*)a);
    pocker bb = *((pocker*)b);
    if(aa.num=='T'){
        aa.num = '9'+1;
    }else if(aa.num=='J'){
        aa.num = '9'+2;
    }else if(aa.num=='Q'){
        aa.num = '9'+3;
    }else if(aa.num=='K'){
        aa.num = '9'+4;
    }else if(aa.num=='A'){
        aa.num = '9'+5;
    }
    if(bb.num=='T'){
        bb.num = '9'+1;
    }else if(bb.num=='J'){
        bb.num = '9'+2;
    }else if(bb.num=='Q'){
        bb.num = '9'+3;
    }else if(bb.num=='K'){
        bb.num = '9'+4;
    }else if(bb.num=='A'){
        bb.num = '9'+5;
    }
    return aa.num - bb.num;
}

int abli(){
    pocker Black[5],White[5];
    if(scanf("%c%c %c%c %c%c %c%c %c%c %c%c %c%c %c%c %c%c %c%c",&Black[0].num,&Black[0].color,&Black[1].num,&Black[1].color,&Black[2].num,&Black[2].color,&Black[3].num,&Black[3].color,&Black[4].num,&Black[4].color,&White[0].num,&White[0].color,&White[1].num,&White[1].color,&White[2].num,&White[2].color,&White[3].num,&White[3].color,&White[4].num,&White[4].color)==EOF)
        return 0;

    qsort(Black,5,sizeof(pocker),cmp);
    qsort(White,5,sizeof(pocker),cmp);
    int i,flagForBlack=0,flagForWhite=0;
    char black[5],white[5];
    for(i=5;i>1;i--){
        if(Black[i-1].num==Black[i].num){
            black[flagForBlack] = Black[i].num;
            flagForBlack++;
        }
    }

    for(i=5;i>1;i--){
        if(White[i-1].num==White[i].num){
            white[flagForWhite] = White[i].num;
            flagForWhite++;
        }
    }


    if(flagForWhite>flagForBlack){
        printf("White wins.\n");
            printf("choose1");
            system("pause");
    }else if(flagForWhite<flagForBlack){
        printf("Black wins.\n");
        printf("choose2");
            system("pause");
    }else{
        for(i=0;i<flagForBlack;i++){
            printf("choose3");
            system("pause");
            if(white[i]>black[i]){
                printf("White wins.\n");
            }else if(white[i]<black[i]){
                printf("Black wins.\n");
            }
        }

    }

    return 1;
}

int main()
{
    while(abli());
    return 0;
}
