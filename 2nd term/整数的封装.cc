//整数的封装
//此题坑点在于整数有正有负，且整数前可以带符号，也可以不带
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
class Integer{
    int a;
public:
  Integer(int ia):a(ia){}
    Integer(char*p, int ia)
    {
        int temp=0;
        int f=1;
            for(int i=0;i<strlen(p);i++)
            {
                if(p[i]=='-')
                {
                    f=-1;
                    continue;
                }
                if(isupper(p[i]))
                {
                    p[i]=tolower(p[i]);
                }
               if(isalnum(p[i]))
               {
                   temp*=ia;
                if(isdigit(p[i]))
                temp+=(p[i]-'0');
                else
                temp+=(p[i]-'a'+10);
               }
            }
        a=temp*f;
    }
    int getValue()
    {
        return a;
    }
};
 
 
 
int main()
{
    char str[100];
    int numOfData, numOfStr;
    int data, i, radix;
     
    cin>>numOfData;
    for (i = 0; i < numOfData; i++){
        cin>>data;
        Integer anInteger(data);
        cout<<anInteger.getValue()<<endl;
    }
 
    cin>>numOfStr;
    for (i = 0; i < numOfStr; i++){
        cin>>str>>radix;
        Integer anInteger(str,radix);
        cout<<anInteger.getValue()<<endl;
    }
    return 0;
}
/**************************************************************
    Problem: 1773
    User: 201501060107
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1268 kb
****************************************************************/