#include<iostream>
using namespace std;
int findvalue (int arr[],int n, int target)
{
    for(int i=0 ; i<n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int marks[5]={10,8,5,9,1};
    int result=findvalue(marks,5,9);

    cout<<result<<endl;
    return 0;
}