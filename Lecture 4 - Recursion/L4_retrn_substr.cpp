#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int subsequence(string in,string out[])
{
    //Base case
    if(in.size()==0) // OR  if(in.empty())
    {
        out[0]="";
        return 1;
    }

    //Recursive call
    string str = in.substr(1);
    int smalloutput=subsequence(str,out);
    for(int i=0;i<smalloutput;i++)
    {
        out[i+smalloutput]=in[0]+out[i];
    } 
    return 2*smalloutput;
}

int main()
{
    string in;
    cin>>in;
    int length = in.size();
    int size = pow(2,length);
    string* out=new string[size];
    int count = subsequence(in,out);
    for(int i=0;i<count;i++)
    {
        cout<<out[i]<<endl;
    }
}