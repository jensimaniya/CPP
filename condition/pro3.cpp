#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter any marks :";
    cin>>marks;

    if(marks<=100 && marks>=90)
    {
        cout<<"your gread is A...";
    }

    else if(marks<=80 && marks>=70)
    {
        cout<<"your gread is B...";
    }

    else if(marks<=60 && marks>=50)
    {
        cout<<"your gread is C...";
    }

    else if(marks<=40 && marks>=30)
    {
        cout<<"your gread is D...";
    }

    else
    {
        cout<<"you are fail...";
    }
        
    return 0;
}