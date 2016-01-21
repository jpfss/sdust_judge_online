#include <stdio.h>
int main()
{
    int input;
    while(1)
    {

        scanf("%d",&input);
        if(input==0)
            break;
            draw(input);

    }
    return 0;
}

void draw(int input)
{
    int i,k,j,plusNum;
    plusNum=input*2-1;
        if(input%2==1)
        {
            for(i=1;i<=input;i++)
            {
                for(j=1;j<i;j++)
                {
                    printf(" ");
                }
                for(k=1;k<=plusNum;k++)
                    printf("+");
                    printf("\n");
                plusNum-=2;
            }
            printf("\n");

        }
        else
            {
                plusNum=input;
                for(i=1;i<=input;i++)
            {
                for(j=1;j<plusNum;j++)
                {
                    printf(" ");
                }
                for(k=1;k<=2*i-1;k++)
                    printf("+");
                    printf("\n");
                plusNum-=1;
            }
            printf("\n");
            }
}
