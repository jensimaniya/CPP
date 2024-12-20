#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter any number :";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        if(n%12==0)
        {
            cout<<"your number is :"<< i*n <<endl;
        }
    }
     
}