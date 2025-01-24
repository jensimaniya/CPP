#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="FullStreak";
    string str2="fullstreak";

    if(str1==str2)
    {
        cout<<"BOTH ARE SAME";
    }
    else
    {
        cout<<"BOTH NOT SAME";
    }

    return 0;
}