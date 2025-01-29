#include<iostream>
using namespace std;

// void printnum (int arr[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

int main()
{
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        
        cout<<"enter the value of index :"<<i<<endl;
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++) {
      cout << arr[i] << endl;
    }
    // printnum(arr,n);

    


    return 0;
}