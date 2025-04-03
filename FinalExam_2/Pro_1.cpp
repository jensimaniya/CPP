#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
  if (num < 2) {
    return false;
  }
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int rows, cols;
  cout << "Enter number of rows: ";
  cin >> rows;
  cout << "Enter number of columns: ";
  cin >> cols;

  int matrix[rows][cols];
  cout << "Enter elements of the matrix: " << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "Prime numbers in the array: ";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (isPrime(matrix[i][j])) {
        cout << matrix[i][j] << " ";
      }
    }
  }
  cout << endl;

  return 0;
}