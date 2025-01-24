#include <iostream>
using namespace std;

int main() {

  int rows, cols;
  cout << "enter rows size : ";
  cin >> rows;

  cout << "enter cols size : ";
  cin >> cols;

  int array[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "enter number :"
           << "[" << i << "][" << j << "] :";
      cin >> array[i][j];
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  cout << "diaognal element is :" << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == j) {

        cout << array[i][j] << " ";
      }
    }
    cout << endl;
  }

  cout << "antidiaognal elemenmt is :" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i + j == rows - 1) {
        cout << array[i][j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}