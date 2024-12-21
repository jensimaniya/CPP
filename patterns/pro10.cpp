#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else {
                cout<< i  ;
            
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter any number :";
    cin>>n; 

    pattern(n);
    return 0;
}