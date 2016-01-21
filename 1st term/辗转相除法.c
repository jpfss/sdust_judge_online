#include<stdio.h>
int main()
{
    int input0,input1,temp;
    int ans=1;
    while(scanf("%d%d",&input0,&input1)!=EOF){
       while(1){
            if(input0<input1){
                temp = input0;
                input0 = input1;
                input1 = temp;
            }
            while(input0 - input1>=0){
                ans = input0-input1;
//                if(ans==0){
//                    printf("")
                }
            }
            if(ans==0){
                printf("%d %d",ans,ans);
            }else{
            input1 = ans;
            }

       }
        return 0;
}

