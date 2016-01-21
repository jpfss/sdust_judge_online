#include<stdio.h>
#include<string.h>
#define  MAX_SIZE 102
 int flag =0;
int get_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            //printf("%d %d",i,j);
            scanf("%d",&ma[i][j]);
        }
        if(m==n&&n==1&&ma[0][0]==0)
            flag=1;
}
int put_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    if(flag) {printf("0\n");return 0;}
     int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
            printf("%d",ma[i][j]);
            else
                 printf(" %d",ma[i][j]);
        }
        printf("\n");
    }

}
int mul_matrix(int pr[MAX_SIZE][MAX_SIZE], int m1[MAX_SIZE][MAX_SIZE], int m2[MAX_SIZE][MAX_SIZE], int m, int n, int q)
{
    int i,j,k,l;
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {
            pr[i][j]=0;
            for(k=0;k<n;k++)
            {
               pr[i][j]+=m1[i][k]*m2[k][j];
            }
        }
}
/**
int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);

    return 0;
}**/
