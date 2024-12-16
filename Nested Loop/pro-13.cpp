#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<":";
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                cout<<j <<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}