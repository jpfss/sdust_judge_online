#include<stdio.h>
//#include<string.h>
int printfTitle()
{
    printf("COCKS,HENS,CHICKS\n");
    return 0;
}
int main()
{
    int a,b,c,d,m,n;
    int x,y,z;

    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF){
    int flag=1;
    for( x=0; x <= n; x++ )
        for( y=0; y <= n; y++ )
            for( z=0; z <= n; z++ )
            {
                if( a*x+b*y+(z*c)/d==m && z*c%d==0 && x+y+z==n )
                {
                    if(flag==1){
                        flag=printfTitle();
                    }
                    printf("%d,%d,%d\n", x, y, z);
                }

            }
    if(flag==1){
        printf("Cannot buy!\n");
    }
    }
    return 0;
}
