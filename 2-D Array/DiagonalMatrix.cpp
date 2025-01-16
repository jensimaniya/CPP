#include<iostream>
#include<vector>
using namespace std;

void diagonal (vector<vector<int>>matrix, int rows, int cols)
{
    for(int i=0; i<rows; i++)
        {
        for(int j=0; j<cols; j++)
            {
                if(i==j)
                    {
                    cout<<matrix[i][j]<<" ";
                    }
                    else
                        {
                        cout<<"_"<<" ";
                        }
            }
            cout<<endl;
        }
}

int main()
{
    vector<vector<int>>matrix={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int row=matrix.size();
    int col=matrix[0].size();

    diagonal(matrix, row,col);


    return 0;
}