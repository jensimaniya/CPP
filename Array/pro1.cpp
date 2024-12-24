#include<iostream>
using namespace std;

void evenvalue(int arr[5])
{
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<endl;
        }
    }
}

int main(){
     
     int arr[5]={11,22,33,44,55};
    cout<<"even number is :"<<endl;
    evenvalue(arr);

    return 0;
}