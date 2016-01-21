#include<stdio.h>
#include<math.h>

int main()
{
    double adotX,adotY;
    double bdotX,bdotY;
    double cdotX,cdotY,cR;
    scanf("%lf%lf%lf%lf%lf%lf%lf",&adotX,&adotY,&bdotX,&bdotY,&cdotX,&cdotY,&cR);

    double A,B,C;
    A = adotY - bdotY;
    B = bdotX - adotX;
    C = (bdotY*(adotX - bdotX))-(bdotX*(adotY-bdotY));

    //printf("%lf %lf %lf\n",A,B,C);

    double a,b;

    a = (A*A)+(B*B);
    a = sqrt(a);

    b = (A*cdotX)+(B*cdotY)+C;
    if(b<0){
        b = -b;
    }

    double d;
    d = b/a;

    if(d > cR){
        printf("Disjoint");
    }else if(d == cR){
        printf("Tangency");
    }else if(d < cR){
        printf("Interseetion");
    }
    return 0;
}
