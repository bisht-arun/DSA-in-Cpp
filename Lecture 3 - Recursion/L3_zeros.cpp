#include<iostream>
using namespace std;


int zero(int n)
{
    int count=0,a=0;
    //Base Case
    if(n==0)
    {
        return 0;
    }

    //Recursive Call
    int x=zero(n/10);
    if(n%10==0)
    {
        return x+1;
    }
    return x;
}


int main()
{
    int n,a;
    //cout<<"Enter Number";
    cin>>n;
    a=zero(n);
    cout<<a<<endl;
    return 0;
}