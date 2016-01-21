#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_primer(int num)
{
    if(num==0||num==1){
        return 0;
    }
    int n,m;
    n = sqrt(num);
    for(m=2;m<=n;m++){
        if((num/m)*m==num){
            return 0;
        }
//printf("¡£");
    }
    return 1;
}

int main()
{
    int input;
    scanf("%d",&input);
    int i;
    int sum=0;
    for(i=1;i<=input;i++){
        if(is_primer(i))
            sum+=i;
    }
    printf("%d",sum);

    return 0;
}
