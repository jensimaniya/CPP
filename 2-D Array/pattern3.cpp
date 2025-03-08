#include <iostream>
#include <vector>
using namespace std;

void pattern3(vector<vector<int>> matrix, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == n - 1 || i == m - 1 || j == 0) {
        cout << matrix[i][j] << " ";
      } else {
        cout << "-"
             << "- ";
      }
    }
    cout << endl;
  }
}

int main() {
  vector<vector<int>> matrix = {{10, 20, 30}, 
                                {40, 50, 60}, 
                                {70, 80, 90}};

  int rows = matrix.size();
  cout << rows << " ";
  int cols = matrix[0].size();
  cout << cols << " ";

  cout << endl;

  pattern3(matrix, rows, cols);

  return 0;
}