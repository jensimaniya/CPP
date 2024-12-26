#include<iostream>
using namespace std;

bool targetSum (int arr[], int n,int target)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    // array ni size user pasethi leva mate
    int n;
    cout<<"enter array size :";
    cin>>n;

    // array ni value user pasethi value leva mate

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"enter the index value :"<<i<<":";
        cin>>arr[i];
    }

    int target;
    cout<<"enter the target value :";
    cin>>target;

     bool ans =targetSum(arr,n,target);
    cout<<ans<<endl;
    
    return 0;
}