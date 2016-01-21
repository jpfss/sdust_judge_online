#include<stdio.h>
int main()
{
    double output,chi,par;
    signed int child,parent;
    scanf("%d/%d",&child,&parent);
    chi = (double)child;
    par = (double)parent;
    output = chi / par;
    printf("%.2f",output);
}


