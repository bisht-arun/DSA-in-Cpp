#include<iostream>
//#define SQ 6
using namespace std;
int main()
{
    // lec 1 (TYPE CASTING)


    // char c='A';
    // int i=c;
    // cout<<c<<" "<<i;
    // char *p1 =&c;
    // int *p2 = (int*)p1;

    // cout<<p1<<endl;
    // cout<<p2<<endl; 
    // cout<<*(p2)<<endl;





    //lec  2  (REFRENCE VARIABLE)


    // int i = 10;
    // int& j = i;
    // i++;
    // cout<<j;





    //lec  3   (DYANMIC MEM ALLOCATION)


   /* int * p = new int;
    *p = 100;
    cout<<p<<" "<<*p; 
 

    // 2D ARRAYS
   

   
    int m , n;
    cin>>m>>n;
    int ** p = new int*[m];
    for (int i =0 ; i<m; i++)
    {
        p[i]= new int[i];
        for(int j= 0 ; j<n ;j++)
        {
            cin>> p[i][j];
        }
    }

    for (int i=0; i<m ; i++)
    {
        delete []p[i];
    }

    delete[] p; */





    // lec 4   (SOME KEYWORDS)


    /*int x= 36/SQ ;
    cout<< x;
    return 0;*/


    // (CONSTANT)

    const int i=10;
    int j = 20;
    const int &k = j;

}
   