#include<stdio.h>


int is_leap_year(int year)
{
    if(year%400==0||(year%100!=0&&year%4==0)){
        return 1;
    }else{
        return 0;
        }
}

int daysCount(int m,int d)
{
    switch(m-1)
    {
        case 0:return d;
        case 1:return 31+d;
        case 2:return 59+d;
        case 3:return 90+d;
        case 4:return 120+d;
        case 5:return 151+d;
        case 6:return 181+d;
        case 7:return 212+d;
        case 8:return 243+d;
        case 9:return 273+d;
        case 10:return 304+d;
        case 11:return 334+d;
    }
    //return 0;
}

int check(int y,int m,int d)
{
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(d<0||d>31){
            return 1;
        }
        break;
    case 2:
        if(is_leap_year(y)!=0){
            if(d<0||d>29){
                return 1;
            }
        }else{
            if(d<0||d>28){
                return 1;
            }
        }
        break;
    default:
        if(d<0||d>30){
            return 1;
        }
        break;
    }
    return 0;
}

int main()
{
    int countY;
    scanf("%d",&countY);

    int i;
    int y,m,d;
    int nums;
    for(i=0;i<countY;i++){
        scanf("%d-%d-%d",&y,&m,&d);
        if(check(y,m,d)!=0){
            printf("error date!\n");
            continue;
        }

        nums = daysCount(m,d);
        if(is_leap_year(y)!=0&&m>2){
            nums++;
        }
        printf("%d\n",nums);
    }
    return 0;
}
