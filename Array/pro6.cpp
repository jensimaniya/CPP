#include<iostream>
using namespace std;

int BeforeSwip (int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int AfterSwip (int arr[],int n)
{
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}

int main()
{
    int arr[]={11,22,33,44,55};
    int n=sizeof(arr)/sizeof(arr[0]);

    BeforeSwip(arr,n);
    AfterSwip(arr,n);


    return 0;
}