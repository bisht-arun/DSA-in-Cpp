 #include<iostream>
 #include<cmath>
 #include<climits>
 using namespace std;

int closest(int arr[])
{
    //Base case
    if(arr[0]==0)
    {
        return 0;
    }
    

    if(arr[0]<0)
    {
      arr[0]=(-1)*arr[0];  
    }

    int min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=(-1)*arr[i];
        }
        if(min>arr[i])
        {
            //Swap
            min=arr[i];
        }
    }
    return min;
}

// int closest(int *a,int n){
//     int min1=INT_MAX;
//     int min2=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(a[i]==0){
//             return 0;
//         }
//         else if(a[i]>0 && a[i]<min1){
//             min1=a[i];
//         }
//         else if(a[i]<0 && a[i]>min2){
//             min2=a[i];
//         }
//     }
//     if(abs(min1)>abs(min2)){
//         return min1;
//     }
//     else{
//         return min2;
//     }
//}


int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=closest(arr,n);
    cout<<j<<endl;
}