#include<iostream>
#include<vector>
using namespace std;
void maxIneachRow (vector<vector<int>>array, int rows, int cols)
{

     int maxValue = 0; 

     for (int i = 0; i < rows; i++) {
        
        
         for (int j = 0; j < cols; j++) {
            if (array[i][j] > maxValue) {
                maxValue = array[i][j]; 
             }        
              }
              cout << "Maximum in row " << i << ": " << maxValue << endl;
     }

}

int main()
{
    vector<vector<int>>array={
         {1, 5, 3},
         {7, 2, 8},
         {4, 9, 6}
    };

    int row=array.size();
    int col=array[0].size();


    maxIneachRow(array,row,col);


    return 0;
}
