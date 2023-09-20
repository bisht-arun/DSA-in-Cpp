#include<iostream>
using namespace std;


int findelem(int a[],int size ,int  x)
{
    if(size <= 0){
        return -1;
    }
    if(a[0]==x){
      return 0;
    }
    int element  =findelem(a+1,size-1,x);
    if(element!=-1){
     return element+1;}
     else{
      return -1;
     }
}

int main() 
{
  int size,x; 
  cout<<"Element to Find: "<<endl;
  cin>>x; 
  cout<<"Give Size: "<<endl;
  cin>>size;
  int a[size];
  cout<<"Give Array: "<<endl;
  for(int i =0 ;i<size; i++){
    cin>>a[i];
  }
  int out = findelem(a,size,x);
  cout<<out<<endl;

}