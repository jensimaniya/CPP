#include<iostream>
using namespace std;

void maxnum(int arr[],int n)
{
    int max=arr[0]                ;
    // or
    // int max=0
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
         max=arr[i];
        }
    }
    cout<<"max value is :"<<max<<endl;
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

    maxnum(arr,n);

    return 0;
}