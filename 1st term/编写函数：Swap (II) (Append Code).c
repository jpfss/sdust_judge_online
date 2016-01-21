#include<stdio.h>
#include<string.h>
int swap_any(void *s, void *t, unsigned n)
{
    //if(n>1000)
    switch(n){
    default:
    {
        char ss[1001];
        strcpy(ss,(char*)s);
        strcpy((char*)s,(char*)t);
        strcpy((char*)t,ss);
        break;
    }
    case 1:
    {
        char ss;
        ss=*(char *) s;
        *(char *) s=*(char*)t;
        *(char*)t=ss;
        break;
    }
    case 4:
    {
        int ss;
        ss=*(int *) s;
        *(int  *) s=*(int *)t;
        *(int *)t=ss;
        break;
    }
    case 8:
    {
        double ss;
        ss=*(double *) s;
        *(double  *) s=*(double *)t;
        *(double*)t=ss;
        break;
    }
    }
}

int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}
