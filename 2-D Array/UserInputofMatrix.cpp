#include <iostream>
using namespace std;

int main() {
  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  int array[rows][cols];

  cout << "Enter the elements of the 2D array:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> array[i][j];
    }
  }

  cout << "The 2D array is:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
