#include <iostream>
using namespace std;
int main()
{
    float n;

    cout<<"enter any number :";
    cin>>n;

    if(n>0)
    {
        cout<<"number is possitive...";
    }

    else if(n==0)
    {
        cout<<"number is zero...";
    }

    else
    {
        cout<<"number is negative....";
    }

    return 0;
}