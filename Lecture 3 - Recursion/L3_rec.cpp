#include<iostream>
using namespace std;


//  lec 1


/*int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    int a =fact(n-1);
    return n*a;
}


int main()
{
    int n;
    cin>>n;
    int out = fact(n);
    cout<<out<<endl;
}*/

#include <bits/stdc++.h>
using namespace std;

void printFun(int test)
{
	if (test < 1)
		return;
	else {
		cout << test << " ";
		printFun(test - 1); // statement 2
		cout << test << " ";
		return;
	}
}

// Driver Code
int main()
{
	int test = 3;
	printFun(test);
}


// lec 2


/*bool is_sorted(int a[], int size){
{
    if (size ==0 || size == 1){
    return true;}
}
if (a[0]>a[1])
{
    return false;
}

bool issmallsort = is_sorted( a+1 , size -1);
return issmallsort;}*/

