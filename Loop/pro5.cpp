#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
     cout<<"enter any number :";
     cin>>n;

     for( int i=1;i<=n;i++)
     {
        if(i%2==1)
        {
            sum+=i;
        }
     }
     cout<<sum;


    return 0;
}