#include <stdio.h>
int main()
{
    unsigned long long int input,sum;
    scanf("%llu",&input);
    if(input%2==0){
        sum=input/2*(input+1);
    }else{
        sum=(input+1)/2*input;
        }
    printf ("%llu",sum);
    return 0;
}
