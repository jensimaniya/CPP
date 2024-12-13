#include <iostream>
using namespace std;
int main()
{
    int cursum=0;
    for(int i=1; i<=3; i++)
    {
        int maxsum=0;
        for(int j=1;j<=3;j++)
        {
            cursum=j+j-i;
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
        }
        cout<<maxsum<<endl;
    }




    return 0;
}