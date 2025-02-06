#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter any number :";
    cin>>n;

    for (int i = 1; i <= 10; i++) {
      if (n % 12 == 0) {
        cout << n << " "<<i << " "<< i * n << endl;
      }
    }
}