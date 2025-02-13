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
    int marks[18]={1,29,3,4,5,6,7,8,9,45,25,24,2,25,25,1115,15,155};
    int result=findvalue(marks,18,155);

    cout<<result<<endl;
    return 0;
}-