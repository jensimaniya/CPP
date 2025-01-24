#include <iostream>
#include <vector>
using namespace std;

void Pattern2(vector<vector<int>> matrix, int rows, int cols) {
  for (int i = rows - 1; i >= 0; i--) {
    cout << matrix[i][0] << " " << endl;
  }

  for (int i = 1; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == j) {
        cout << matrix[i][j] << " " << endl;
      }
    }
  }

  for (int i = rows - 2; i >= 0; i--) {
    cout << matrix[i][rows - 1] << " " << endl;
  }
}

int main() {
  vector<vector<int>> matrix = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

  int row = matrix.size();
  int col = matrix[0].size();

  Pattern2(matrix, row, col);

  return 0;
}