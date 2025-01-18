#include <iostream>
using namespace std;

void generateSpiralMatrix(int n) {

  int matrix[n][n];

  int value = 1;
  int top = 0, bottom = n - 1, left = 0, right = n - 1;

  while (top <= bottom && left <= right) {

    for (int i = left; i <= right; ++i) {
      matrix[top][i] = value++;
    }
    top++;

    for (int i = top; i <= bottom; ++i) {
      matrix[i][right] = value++;
    }
    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; --i) {
        matrix[bottom][i] = value++;
      }
      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; --i) {
        matrix[i][left] = value++;
      }
      left++;
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter the size of the matrix (N): ";
  cin >> n;

  if (n > 0) {
    generateSpiralMatrix(n);
  } else {
    cout << "N must be greater than 0!" << endl;
  }

  return 0;
}
