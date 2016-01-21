#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100100
int main()
{
    #if !defined  ONLINE_JUDGE
    freopen("2.txt", "r", stdin);
    //freopen("1.txt", "w", stdout);
    #endif
    int n,i,j,k;
    char s1[N];
    scanf("%d",&n);
    getchar();
    char **s;
    s=(char**)calloc(n+1,sizeof(char*));
    char *ss[50001];
    for(i=0;i<n;i++)
    {
        gets(s1);
        *(s+i)=(char*) calloc(strlen(s1)+1,sizeof(char));
        strcpy(*(s+i),s1);
        ss[i]=*(s+i);
    }
    for(i=0;i<n;i++)
  {
      for(j=0;j<n-1-i;j++)
      {
            if(strcmp(ss[j],ss[j+1])>0)
          {
              char *t;
              t=ss[j];
              ss[j]=ss[j+1];
              ss[j+1]=t;
          }
      }
  }
  for(i=0;i<n;i++)
      puts(ss[i]);
    return 0;
}
