#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>que;
    que.push(10);
    que.push(20);
    que.push(30);

    cout<<que.front()<<endl;
    cout<<que.back()<<endl;

    que.pop();

    cout<<que.front()<<endl;

    cout<<que.size()<<endl;
    cout<<que.empty()<<endl;

    return 0;
}