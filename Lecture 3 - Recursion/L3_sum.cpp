#include<iostream>
using namespace std;

int sum(int n)
{
    //Base case
    if(n==0)
    {
        return 0;
    }

    //Recursive call
    int x=sum(n/10);
    return x+n%10;
}

int main()
{
    int n,summ=0;
    //cout<<"Enter any integar";
    cin>>n;
    cout<<sum(n)<<endl;
}