#include<stdio.h>
#include<string.h>
int main()
{
    int n, x=0, y, t= 0;
    while(scanf("%d", &n)!=EOF)
    {
        int  a[51][51]={0};
    x=0;
    y=n-1;
    t = a[0][y] = 1;
    for(;t < n * n;)
    {
        while(x + 1 < n && ! a[x + 1][y])
            a[++x][y] = ++t;
        while(y - 1 >= 0 && ! a[x][y - 1])
            a[x][--y] = ++t;
        while(x - 1 >= 0 && ! a[x - 1][y])
            a[--x][y] = ++t;
        while(y + 1 < n && ! a[x][y + 1])
            a[x][++y] = ++t;
    }
    x=0;
    while(x < n)
    {

        y=0;
        while(y < n)
        {

            if(y==0)
            printf("%d", a[x][y]);
//            else if(y==n-1)
//            {
//                printf(" %d\n", a[x][y]);
//            }
            else
                printf(" %d", a[x][y]);
            y++;
        }
        printf("\n");
        x++;

    }
    printf("\n");

    }

    return 0;
}
