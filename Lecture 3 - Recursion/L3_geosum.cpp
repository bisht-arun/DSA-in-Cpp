#include<iostream>
#include<cmath>
using namespace std;

float geosum(int n)
{
    //Base case
    if(n==0)
    {
        return 1;
    }

    //Recusive call
    float a=geosum(n-1);
    return a+1/pow(2,n);
}

int main()
{
    int n;
    //cout<<"Enter any number";
    cin>>n;
    cout<<geosum(n);
    return 0;
} 