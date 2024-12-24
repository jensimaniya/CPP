#include<iostream>
using namespace std;

void minnum(int arr[],int n)
{
    int min=arr[0];
    // or
    // int max=0
    for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
         min=arr[i];
        }
    }
    cout<<"min value is :"<<min<<endl;
}



int main()
{
    int n;
    cout<<"enter array of size :";
    cin>>n;

    int arr[n];
    for(int i=0;  i<n; i++)
    {
        cout<<"enter the value of array :";
        cin>>arr[i];
    }

    minnum(arr,n);

    return 0;
}