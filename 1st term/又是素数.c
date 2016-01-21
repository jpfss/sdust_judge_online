#include<stdio.h>
#include<math.h>
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
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
