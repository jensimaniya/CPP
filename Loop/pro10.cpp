#include <iostream>
using namespace std;

int main()
{

int n,count=0,sum=0,i=1;

cout<<"enter any number :";
cin>>n;

while(i<=n)
{
    if(i%2==0)
    {
        count ++;
        sum += i;
    }
    i++;
}
cout<<count<<endl;
cout<<sum;


    return 0;
}