#include<stdio.h>
int main()
{
    long long int input;//,ans;
    while(scanf("%llu",&input)!=EOF){
        //ans=((input-1)*1000)+471;
        if(input>1)
            printf("%llu471\n",input-1);
        else
            printf("471\n");
    }
    return 0;
}
