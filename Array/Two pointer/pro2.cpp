#include<iostream>
using namespace std;

bool isPairExist (int arr[] int n, int target)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
    }
    if(target==sum)
    {
        return true;
    }
    else if(sum>target)
    {
        j--;
    }
    else
    {
        i++;
    }

}
return false;


int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int target;
    cout<<"enter your target :";

    cin>>target;

    cout<<isPairExist(arr,5,target)<<endl;


    return 0;
}