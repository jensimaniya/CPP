#include<iostream>
using namespace std;

int printsum(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum+=arr[i];
    }
   cout<<"sum of :"<<sum<<endl;
   return 0;
}



int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printsum(arr,n);

    return 0;
}