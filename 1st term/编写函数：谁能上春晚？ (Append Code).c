#include<stdio.h>
#include<stdlib.h>
typedef struct
{
      int score[10];
      double aver;
      char name[81];
} Choice;

int inputChoice(Choice peo[],int M,int N){
    int i,j;
    for(i=0;i<M;i++){
        scanf("%s %d",peo[i].name,&peo[i].score[0]);
        for(j=1;j<N;j++){
            scanf("%d",&peo[i].score[j]);
        }

    }
}

int cmp(const void* a,const void* b){
    //int aa = *((int*)a)
    return *((int*)a)-*((int*)b);
}
int cmpp(const void* a,const void* b){
    //int aa = *((int*)a)
    return (*((Choice*)b)).aver-(*((Choice*)a)).aver;
}
void sort(Choice peo[],int M,int N)
{
    int i;
    for(i=0;i<M;i++){
        int sum = 0;
        qsort(peo[i].score,N,sizeof(int),cmp);
        //printf("%s ",peo[i].name);
        int j;

        for(j=1;j<N-1;j++){
            sum+=peo[i].score[j];
        }
        //printf("%d========\n",sum);
        peo[i].aver = ((double)sum)/(N-2);
    }
    qsort(peo,M,sizeof(Choice),cmpp);
}
int main()
{
    Choice peoples[30];
    int M,N,i;
    scanf("%d%d",&M,&N);
    inputChoice(peoples,M,N);
    sort(peoples,M,N);
    for (i=0; i<3; i++)
        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
    return 0;
}


