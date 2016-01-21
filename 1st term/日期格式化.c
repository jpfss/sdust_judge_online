#include<stdio.h>
#include<ctype.h>
typedef struct {
    int year=0;
    int month=0;
    int day=0;
    char date[12];
}Date;
int format(char input){
    return input-'0';
}
void formatDate()
{
    Date date;
    gets(date.date);
    if(!isdigit(date.date[2])) {
        date.year=format(date.date[0])*10;
        date.year+=format(date.date[1]);
        if(!issdigit(date.date[4]))
            date.month = format(date.date[3]);
            if(!isdigit)

    }

}

int main()
{
    int count;
    scanf("%d -",&count);
    int i;
    for(i=0;i<count;i++){
        formatDate();
    }

    return 0;
}
