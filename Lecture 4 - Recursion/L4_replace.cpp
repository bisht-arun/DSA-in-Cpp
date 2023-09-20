#include<iostream>
using namespace std;

void replace(char s[],char gvn , char rplc)
{
    //Base case
    if(s[0]=='\0')
    {
        return;
    }

    if(s[0]==gvn)
    {
        s[0]=rplc;
    }

    //Recursive call
    replace(s+1,gvn,rplc);

}

int main()
{
    char str[100];
    cin>>str;
    char gvn,rplc;
    cin>>gvn>>rplc;
    replace(str,gvn,rplc);
    cout<<str<<endl;
}