#include<iostream>
#include<cstring>
#include<cmath> 
using namespace std;

int main()
{
    int in;
    cin>>in;
    string* out=new string[size];
    int count = keypad(in,out);
    for(int i=0;i<count;i++)
    {
        cout<<out[i]<<endl;
    }
}
