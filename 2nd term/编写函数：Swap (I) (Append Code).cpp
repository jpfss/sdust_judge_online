#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
 
void swap(double *a,double *b){
    double tmp = *a;
    *a = *b;
    *b = tmp;
}
 
int main()
{
    int x1, y1;
     
    cin>>x1>>y1;
    swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;
     
    cin>>x1>>y1;
    swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;
 
    double x2, y2;
     
    cin>>x2>>y2;
    swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;
     
    cin>>x2>>y2;
    swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}

