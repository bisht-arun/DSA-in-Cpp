#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  // float f=10.5;
  // float p= 2.5;
  // float *ptr =&f;
  // (*ptr)++;
  // *ptr=p;
  // cout<<*ptr<<" "<<f<<" "<<p<<" "<<ptr; 

  int a[10] , i =0 ;
  a[0]=1;
  a[1]=2;
  a[2]=3;
  int *ptr =&a[0];

 for(i=0;i<3;i++){
  cout<< i[a]<<" "<< a[i]<<" "<<*(a+i)<<" "<<&a<<" "<<&ptr<<" "<<endl;
 }
}