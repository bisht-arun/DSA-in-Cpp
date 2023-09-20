#include<iostream>
#include <climits>
using namespace std;

int count(int a[],int size,int x)
{
  int c=0;
  for(int i=0;i<size;i++)
  {
  if(a[i]==x)
  {
    c++;
  }
  return c;
 }
}


int findindx(int a[],int size,int x)
{  
  
    //Base case
    if(size <= 0)
    {
        return 0;
    }


    //Recursive Call
    int k=0;
    int out[]
    int element  =findindx(a,size-1,x);
    if(element!=-1)
    {
      if(a[0]==x)
      {
        return out[k] = element+1;
      }
    }
    else
    {
        return 0;
    }
    // if(a[size-1]==x)
    // {
    //     return out[k]=size;
    // }

}

int main(){
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

  int c = count(a,size,x);
  int out[c];

  for(int i=0;i<c;i++){
    out[i]=findindx(a,size,x);
  }
  for(int i=0;i<c;i++){
    cout<<out[i]<<endl;
  }
  return 0;
}





// #include <iostream>
// #include <climits>
// using namespace std;

// int size(int *a,int n,int num){
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(a[i]==num){
//             count ++;
//         }
//     }
//     return count;
// }

// int index(int *a,int n,int num){
//     if(n<=0){
//         return 0 ;
//     }
//     if(a[0]==num){
//         a[0]=INT_MAX;
//         return 1;
//     }
//     int smallOutput=index(a+1,n-1,num);
//         return smallOutput+1;

// }

// int main() {
//     int n;
//     cin>>n;
//     int num;
//     cin>>num;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int m=size(a,n,num);
//     int out[m];
//     for(int i=0;i<m;i++){
//         out[i]=index(a,n,num);
//     }
//     for(int i=0;i<m;i++){
//         cout<<out[i]<<" ";
//     }

//     return 0;
// }