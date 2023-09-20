#include<iostream>
using namespace std;

int length(char s[])
{
    //Base case
    if(s[0]=='\0')
    {
        return 0;
    }

    //Recursive call
    int smallstring=length(s+1);
    return smallstring+1;

}
int main()
{
    char str[100];
    cin>>str;
    int l=length(str);
    cout<<l<<endl;
}