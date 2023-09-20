#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int so1 = fibo(n-1);
    int so2 = fibo(n-2);
    //cout<<so2<<" "<<so1<<endl;
    return so1 + so2;
}

int main()
{
    int i,x=0;
    cout<<"Enter Element: ";
    cin>>i;
    while(x<=i){
    cout<<fibo(x)<<endl;
    x++;
    }
}

