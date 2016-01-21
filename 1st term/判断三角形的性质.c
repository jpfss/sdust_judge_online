#include<stdio.h>
void isType(int type)
{
    switch(type)
    {
        case 0:printf("not a triangle\n");break;
        case 1:printf("a equileteral triangle\n");break;
        case 2:printf("a isosceles triangle\n");break;
        case 3:printf("a right triangle\n");break;
        case 4:printf("a triangle\n");break;
    }

}
int main()
{
    int a,b,c;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0||b==0||c==0){
            break;
        }
        if(a+b>c&&b+c>a&&a+c>b){
            if(a==b||b==c||c==a){
                if(a==b&&b==c){
                    isType(1);
                }else{
                    isType(2);
                }
            }else if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(a*a)+(c*c)==(b*b)){
                isType(3);
            }else{
                isType(4);
            }
        }else{
            isType(0);
        }
    }
    return 0;
}
