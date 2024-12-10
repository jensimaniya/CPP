#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter any number :";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        if(i==8)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}