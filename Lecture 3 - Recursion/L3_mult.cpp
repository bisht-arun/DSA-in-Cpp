#include<iostream>
using namespace std;

int mult(int a, int b)
{   
   
    // Base case
    if(a==0 || b==0)
    {
        return 0;
    }

    // Recursive call
    int x=mult(a,b-1);
    x=x+a;
    return x;

}

int main()
{
    int a,b,c;
    //cout<<"Enter Number";
    cin>>a>>b;
    c=mult(a,b);
    cout<<c<<endl;
    return 0;
}