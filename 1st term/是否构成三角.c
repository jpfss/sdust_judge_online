#include<stdio.h>
int main()
{
    int CountY;
    int a,b,c;
    int tmp;
    scanf("%d",&CountY);
    int i=0;
    while(i<CountY){
        i++;
        scanf("%d%d%d",&a,&b,&c);


        if(a>=b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a>=c){
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b>=c){
        tmp = b;
        b = c;
        c = tmp;
    }


//printf("%d%d%d",a,b,c);
        if(c-b<a){
            printf("YES\n");
        }else{
            printf("NO\n");
            }
    }
    return 0;
}
