#include <iostream>
using namespace std;

bool isRowSame(int row[], int cols) {
  for (int j = 1; j < cols; ++j) {
    if (row[j] != row[0]) {
      return false; 
    }
  }
  return true; 
}

int main() {
  int rows, cols;

 
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  
  int matrix[rows][cols];

  
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  cout << "The 2D array is:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  
  int count = 0;
  cout << "\nRows with all elements the same:" << endl;
  for (int i = 0; i < rows; ++i) {
    if (isRowSame(matrix[i], cols)) {
      count++;
      cout << "Row " << i + 1 << ": ";
      for (int j = 0; j < cols; ++j) {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
    }
  }

  // Print the count of such rows
  cout << "\nTotal rows with all elements the same: " << count << endl;

  return 0;
}
