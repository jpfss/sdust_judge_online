#include <stdio.h>

int a[1000002]= {'\0'};
long int n, p, i, j, c, max,t,n,k,m;
int main()
{

    while (scanf("%d %d", &i, &j) != EOF)
    {
        max = 0;
        k=i;
        m=j;
        if (i>j)
            {
                t=i;
                i=j;
                j=t;
            }

        for (p = i; p<=j; p++)
        {
            n = p;
            c = 1;
            if (a[p]=='\0')
            {
                for(;n!=1;)
                {
                    c++;
                    if (n % 2 == 0)
                    n /= 2;
                    else
                    n = 3 * n + 1;
                }
                    a[p]=c;

                if (a[p] > max)
                    max = a[p];
            }
            else
            if (a[p] > max)
                max = a[p];
        }
        printf("%d %d %d\n", k, m, max);
    }
    return 0;
}
