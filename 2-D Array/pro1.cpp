#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

        int row=matrix.size();
        cout<<row<<endl;

        int col=matrix[0].size();
        cout<<col<<endl;

        cout<<matrix[2][1];
        cout<<endl;
        cout<<endl;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                    {
                        cout<<matrix[j][i]<<" ";
                    }
            cout<<endl;
            }
        cout<<endl;

        for(int i=row-1; i>=0; i--)
        {
            for(int j=col-1; j>=0; j--)
            {
                cout<<matrix[i][j]<<" ";

            }
            cout<<endl;
        }
        cout<<endl;



        return 0;

}