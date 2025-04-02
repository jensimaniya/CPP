#include<iostream>
using namespace std;

bool print (int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool result=print(arr,n);
    cout<<result<<endl;

    return 0;
}