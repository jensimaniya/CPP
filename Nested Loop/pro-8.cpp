#include <iostream>
using namespace std;
int main()
{
    int sum=0;

    for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                if(i<j)
                {
                    sum+=i;
                }
                cout<<i<<" "<<j<<endl;
                 cout<<sum<<endl;
            }
        }

   
    return 0;
}