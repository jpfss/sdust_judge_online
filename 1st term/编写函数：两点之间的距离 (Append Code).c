#include<stdio.h>
#include<math.h>

typedef struct{
    double a;
    double b;
}POINT;

void input_point(POINT *pt){
    scanf("%lf %lf",&(*pt).a,&(*pt).b);
}

double distance(POINT p1, POINT p2){
    double dis_a = p1.a - p2.a;
    double dis_b = p1.b - p2.b;

    return sqrt((dis_a*dis_a)+(dis_b*dis_b));
}

int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%g",dis);
   return 0;
}
