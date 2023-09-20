#include<iostream>
using namespace std;

int partition(int *a,int si,int ei)
{
    //Placing at the right position
    int count=si;
    for(int i=si;i<=ei;i++)
    {
        if(a[si]>a[i])
        count++;
    }
    int temp=a[si];
    a[si]=a[count];
    a[count]=temp;

    int i=si;
    int j=ei;
    //After this loop 
    //Elements smaller than count will be on the left
    //Elements bigger than count will be on the right
    while(i<count && j>count)
    {
        if(a[i]<a[count])
        {
            i++;
        }
        else if(a[j]>a[count])
        {
            j--;
        }
        else
        {
            int temp=0;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    return count;
}

void quicksort(int *a,int si,int ei)
{
    //Base case
    if(si>=ei)
    {
        return ;
    }

    
    //Recursive call
    int count=partition(a,si,ei);
    quicksort(a,si,count-1);
    quicksort(a,count+1,ei);
}

// Print the array
void printArray(int a[], int size) 
{
    for (int i = 0; i < size; i++)
       cout<<a[i]<<" ";
       cout<<endl;
}

int main()
{
    int size;
    cin>>size;
    int si=0;
    int ei=size-1;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    quicksort(a,si,ei);
    printArray(a,size);
}