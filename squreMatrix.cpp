#include <iostream>
using namespace std;
int main() {
  int m, n, i, j, A[10][10];
  cout << "Enter the number of rows and columns of the matrix : ";
  cin >> m >> n;
  cout << "Enter the array elements : ";
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      cin >> A[i][j];
  cout << "Matrix : \n ";
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++)
      cout << A[i][j] << "  ";
    cout << "\n ";
  }
  if (m == n)
    cout << "The entered array is a square matrix.";
  else {
    cout << "The entered array is not a square matrix.";
    exit(0);
  }
  cout << "The diagonal elements are : \n";
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (i == j)
        cout << A[i][j];
      else
        cout << "  ";
    }
    cout << "\n";
  }
  return 0;
}