// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int rows, cols;

//   // Input matrix dimensions
//   cout << "Enter number of rows and columns: ";
//   cin >> rows >> cols;

//   vector<vector<int>> matrix(rows, vector<int>(cols));

//   // Input matrix elements
//   cout << "Enter matrix elements:" << endl;
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       cin >> matrix[i][j];
//     }
//   }

//   // Finding max value in each row
//   cout << "Maximum values in each row:" << endl;
//   int maxVal = 0;
//   for (int i = 0; i < rows; i++) {

//     for (int j = 0; j < cols; j++) {
//       if (matrix[i][j] > maxVal) {
//         maxVal = matrix[i][j];
//       }
//     }
//     cout << maxVal << endl;
//   }

//   return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<vector<int>>metrix={
    {1,2,30},
    {4,500,60},
    {700,8,90},

  };

  int rows=metrix.size();
  int cols=metrix[0].size();

  int max=0;

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      if(metrix[i][j]>max)
        {
        max=metrix[i][j];
        }
        

    }
    cout<<max<<endl;
  }

  return 0;
}
