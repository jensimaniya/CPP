#include <iostream>
#include <vector>
using namespace std;

void Pattern1(vector<vector<int>> matrix, int rows, int cols) {
  for (int i = 0; i < cols; i++) {
    cout << matrix[0][i] << " " << endl;
  }

  for (int i = 1; i < rows; i++) {
    for (int j = cols - 2; j >= 0; j--) {
      if (i == j) {
        cout << matrix[i][j] << " " << endl;
      }
    }
  }

  for (int i = 0; i < cols; i++) {
    cout << matrix[rows - 1][i] << " " << endl;
  }
}

int main() {
  vector<vector<int>> matrix = {{10, 20, 30}, 
                                {40, 50, 60}, 
                                {70, 80, 90}};

  int row = matrix.size();
  int col = matrix[0].size();

  Pattern1(matrix, row, col);

  return 0;
}