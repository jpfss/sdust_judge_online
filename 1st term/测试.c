#include<stdio.h>
#include<math.h>
int doit(double a,double b,double c,int case_)
{

    double dt;
    if(case_!=1)
            printf("\n");
        //case_++;
        printf("Case %d :\n", case_);
        if(a==1){
            printf("x^2");
        }else{
            printf("%lgx^2", a);
        }
        if(fabs(b) < 0.00000001);
        else if(b < -0.00000001&& fabs(fabs(b) - 1)> 0.00000001)
            printf(" - %lgx", fabs(b));
        else if(b > 0.00000001&& fabs(fabs(b) - 1)> 0.00000001)
            printf(" + %lgx", fabs(b));
        else if(b < 0.00000001&& fabs(fabs(b) - 1)< 0.00000001)
            printf(" - x");
        else if(b > 0.00000001&& fabs(fabs(b) - 1)< 0.00000001)
            printf(" + x");
        if(fabs(c) < 0.00000001);
        else if(c > 0.00000001)
            printf(" + %lg", c);
        else if(c < -0.00000001)
            printf(" - %lg", fabs(c));
        printf(" = 0\n");
        double x1, x2, temp;
        dt = b * b - 4 * a * c;
        if(dt > 0.00000001)
        {
            x1 = (- b - sqrt(dt)) / (2 * a);
            x2 = (- b + sqrt(dt)) / (2 * a);
            if(x1 - x2 > 0.00000001)
            {
                temp = x1;
                x1 = x2;
                x2 = temp;
            }
            //cout<<x1<<x2;
            if(fabs(x1) < 0.00000001)
                x1 = 0;
            if(fabs(x2) < 0.00000001)
                x2 = 0;
            printf("two real roots : %lg, %lg\n", x1, x2);
        }
        if(fabs(dt) < 0.00000001)
            {
                x1 =  (-b) / (2 * a);
                if(fabs(x1) < 0.00000001)
                    x1 = 0;
                printf("only one real root : %lg\n", x1);
            }
        if(dt < -0.00000001)
        {
            if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) > 0.00000001))
                {
                    printf("two imaginary roots : %lgi, ", sqrt(4 * a * c-b * b) / (2 * a));
                    printf("-%lgi\n", sqrt(4 * a * c-b * b) / (2 * a));
                }
            else if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.00000001))
                {
                    printf("two imaginary roots : i, -i\n");
                }
            else if(fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.00000001)
            {
                printf("two imaginary roots : %lg+i, ", (-b / (2 * a)));
                printf("%lg-i\n", (-b / (2 * a)));
            }
            else
            {
                printf("two imaginary roots : %lg+%lgi, ", (-b / (2 * a)), sqrt(4 * a * c-b * b) / (2 * a));
                printf("%lg-%lgi\n", (-b / (2 * a)), sqrt(4 * a * c-b * b) / (2 * a));
            }
        }
}
int main()
{
    double a, b, c;
    int case_ = 1;

    while(1)
    {
        scanf("%lf",&a);
        if(a==0){
            return 0;
        }
        scanf("%lf%lf",&b,&c);
        if(a < 0)
        {
            a = -a;
            b = -b;
            c = -c;
        }
        doit(a,b,c,case_);
        case_++;
    }
    return 0;
}
