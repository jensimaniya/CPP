#include<iostream>
#include<vector>
using namespace std;

void antidiagonal (vector<vector<int>>matrix, int col, int row)
{
    for(int i=0; i<row; i++)
        {
        for(int j=0; j<col; j++)
            {
            if(i+j==row-1)
                {
                cout<<matrix[i][j]<<endl;
                }
            }
        }
}

int main()
{
    vector<vector<int>>matrix={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int row=matrix.size();
    int col=matrix[0].size();

    antidiagonal(matrix, row, col);




    return 0;
}