#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Hello I'm Arun";
    char c ='H';
    cout<<s<<endl;
    cout<<c;

    string *sp=new string; //making string dynamically inside heap
    *sp = "ABC";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    cin>>s;          //this will break when it will find space 
    cout<<s<<endl;

    getline(cin,s);  //this will not break when it will find space 
    cout<<s<<endl;   //using getline() will continue to print 

    s="ARUN SINGH";
    cout<<s[0];      //we can also use it as array 

    string s2=sp+s;  // we can also concat using  '+'

    s+=sp;          // we can also do this

    cout<<s.size()<<endl; //it will give us the size of whole string

    //string s="ARUN SINGH";

    cout<<s.substr()<<endl; // it will give us some part of string

    cout<<s.find("A")<<endl; // it will find the index of the element you want to find
}