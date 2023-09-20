#include<iostream>
using namespace std;

void merge(int a[],int si,int mid,int ei)
{
    int n1=mid-si+1;
    int n2=ei-mid;
    int l[n1];
    int m[n2];
    

    //Putting in two different array
    for(int k=0;k<n1;k++)
    {
        l[k]=a[si+k];    
    }

    for(int k=0;k<n2;k++)
    {
        m[k]=a[mid+k+1];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = si;

    //Sorting both array and putting it in to another array
    while(i<n1 && j<n2)
    {
        if(l[i]<m[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=m[j];
            j++;
        }
        k++;
    }

    //Pick up the remaining elements
    while (i < n1) 
    {
        a[k] = l[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        a[k] = m[j];
        j++;
        k++;
    }
}


void mergesort(int a[],int si,int ei)
{
    //Base case
    if(si>=ei)
    {
        return ;
    }

    //Recursive call
    int mid=(si+ei)/2;
    mergesort(a,si,mid);
    mergesort(a,mid+1,ei);
    merge(a,si,mid,ei);
    
}

// Print the array
void printArray(int a[], int size) 
{
    for (int i = 0; i < size; i++)
       cout << a[i] << " ";
       cout << endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int si=0;
    int ei=n-1;
    //si start index
    //ei end index
    mergesort(a,si,ei);
    printArray(a,n);
}