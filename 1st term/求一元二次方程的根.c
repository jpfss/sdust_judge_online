#include<stdio.h>
#include<math.h>

void println(double a,double b,double c)
{
    printf("%gx^2 ",a);
    if(b>0){
        printf("+ %gx ",b);
    }else if(b<0){
        printf("- %gx ",-b);
    }
    if(c>0){
        printf("+ %g = 0\n",c);
    }else if(c<0){
        printf("- %g = 0\n",-c);
    }else{
        printf("= 0\n");
    }
}

int main()
{
    double a,b,c;
    int i=1;
    double tmp;
    double ir1,ir2;
    double root1,root2;
    while(1){
        a = 0;
        b = 0;
        c = 0;

        scanf("%lf",&a);
        if(a==0){
            break;
        }
        scanf("%lf%lf",&b,&c);

        if(a<0){
            a = -a;
            b = -b;
            c = -c;
        }

        double delta;
        delta = b*b-(a*c*4);

        //printf("===%lf===\n",delta);

        printf("Case %d :\n",i);
        println(a,b,c);

        if(delta<0.000000000001&&delta>-0.00000000001){
            printf("only one real root : ");
            root1 = (-b)/(a*2);
            printf("%g\n",root1);
        }else if(delta > 0){
            printf("two real roots : ");
            root1 = (-b-sqrt(delta))/(a*2);
            root2 = (-b+sqrt(delta))/(a*2);

            //printf("oringal data root1 %g root2 %g==========\n",root1,root2);
            if(root1>root2){
                tmp = root1;
                root1 = root2;
                root2 = tmp;
            }
            printf("%g, %g\n",root1,root2);
        }else if(delta < 0){
            printf("two imaginary roots : ");
            delta = -delta;
            root1 = (-b)/(a*2);
            //printf("%g",root1);
            root2 = sqrt(delta)/(a*2);

            if(root1!=0){
                if(root2 == 1){
                    printf("%g+i, %g-i\n",root1,root1);
                }else{
                    printf("%g+%gi, %g-%gi\n",root1,root2,root1,root2);
                }
            }else{
                if(root2 == 1){
                    printf("+i, -i\n");
                }else{
                    printf("%gi, -%gi\n",root2,root2);
                }
            }
        }
        i++;
    }
    return 0;
}


int aa()
{

        printf("Case %d :\n", caseNum);
        if(a == 1){
            printf("x^2");
        }else{
            printf("%lgx^2", a);
        }

        if(fabs(b) < 0.0000001);
        else if(b < -0.0000001&& fabs(fabs(b) - 1)> 0.0000001)
            printf(" - %lgx", fabs(b));
        else if(b > 0.0000001&& fabs(fabs(b) - 1)> 0.0000001)
            printf(" + %lgx", fabs(b));
        else if(b < 0.0000001&& fabs(fabs(b) - 1)< 0.0000001)
            printf(" - x");
        else if(b > 0.0000001&& fabs(fabs(b) - 1)< 0.0000001)
            printf(" + x");
        if(fabs(c) < 0.0000001);
        else if(c > 0.0000001)
            printf(" + %lg", c);
        else if(c < -0.0000001)
            printf(" - %lg", fabs(c));
        printf(" = 0\n");
        double x1, x2, temp;
        dt = b * b - 4 * a * c;
        if(dt > 0.0000001)
        {
            x1 = (- b - sqrt(dt)) / (2 * a);
            x2 = (- b + sqrt(dt)) / (2 * a);
            if(x1 - x2 > 0.0000001)
            {
                temp = x1;
                x1 = x2;
                x2 = temp;
            }
            //cout<<x1<<x2;
            if(fabs(x1) < 0.0000001)
                x1 = 0;
            if(fabs(x2) < 0.0000001)
                x2 = 0;
            printf("two real roots : %lg, %lg\n", x1, x2);
        }
        if(fabs(dt) < 0.0000001)
            {
                x1 =  (-b) / (2 * a);
                if(fabs(x1) < 0.0000001)
                    x1 = 0;
                printf("only one real root : %lg\n", x1);
            }
        if(dt < -0.0000001)
        {
            if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) > 0.0000001))
                {
                    printf("two imaginary roots : %lgi, ", sqrt(4 * a * c-b * b) / (2 * a));
                    printf("-%lgi\n", sqrt(4 * a * c-b * b) / (2 * a));
                }
            else if((-b / (2 * a)) == 0&& (fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.0000001))
                {
                    printf("two imaginary roots : i, ");
                    printf("-i\n");
                }
            else if(fabs(sqrt(4 * a * c-b * b) / (2 * a) - 1 ) < 0.0000001)
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

        return 0;
}
