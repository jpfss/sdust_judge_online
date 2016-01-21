#include<stdio.h>
struct CPLX{
    double a;
    double b;
};

void get_cplx(struct CPLX *cx){
    scanf("%lf %lf",&(*cx).a,&(*cx).b);
}

void put_cplx(struct CPLX cx){
    printf("%g %g\n",cx.a,cx.b);
}

struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2){
    struct CPLX temp;
    temp.a = cx1.a+cx2.a;
    temp.b = cx1.b+cx2.b;
    return temp;
}

struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2){
    struct CPLX temp;
    temp.a = cx1.a - cx2.a;
    temp.b = cx1.b - cx2.b;
    return temp;


}




int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
