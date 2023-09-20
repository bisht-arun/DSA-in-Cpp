#include<iostream>
using namespace std;

void remove(char s[])
{
    //Base case
    if(s[0]=='\0')
    {
        return;
    }


    //Recursive call
    if(s[0]!='x')
    {
        remove(s+1);
    }

    else
    {
        int i=1;
        for(;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        remove(s);
    }
}

int main()
{
    char str[100];
    cin>>str;
    remove(str);
    cout<<str<<endl;
}