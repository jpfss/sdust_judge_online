#include<stdio.h>
int  move (int n,char a,char b,char c)
{

    if(n==1)
    {printf("   plate 1 : from %c to %c\n",a,c); return 0;}
    else
    {
        move(n-1,a,c,b);
        printf("   plate %d : from %c to %c\n",n,a,c);
       move(n-1,b,a,c);
    }

}
int main()
{

    int i=0;
    int n;
    char a,b,c;
    while(~scanf("%d %c %c %c",&n,&a,&b,&c))
    {
        i++;
        printf("case %d :\n",i);
        move ( n, a, b, c);
        printf("\n");
    }
    return 0;
}
