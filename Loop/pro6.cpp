#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"enter any number :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        fact*=i;
        // fact=fact*i
    }
    cout<<fact<<endl;


    return 0;
}