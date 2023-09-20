#include<iostream>
using namespace std;
int main()
{
  int a[]={1,2,3};
  cout<<*(a+2)<<endl;
  char s[]="hello";
  char*p = s;
  cout<<s[0]<<" "<<p;

}
// void fun(int a[])
// {
//   cout<<a[0]<<" ";
// }
// int main()
// {
//     int a[]={1,2,3};
//     fun(a+1);
//     cout<<a[0];

// }

//char * p1 = &c;
    // int *p2 = (int*)p1;

    // cout<<p1<<endl;
    // cout<<p2<<endl;

    // cout<<*(p2 + 2)<<endl;