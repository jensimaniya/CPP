#include <iostream>
#include <vector>
using namespace std;
void ReverceN(vector<vector<int>> array, int m, int n) {
  for (int i = 0; i < m; i++) {
    cout << array[i][m - 1] << " " << endl;
  }

  for (int i = m - 1; i > 0; i--) {
    {
      for (int j = n - 2; j > 0; j--) {

        if (i == j) {
          cout << array[i][j] << " " << endl ;
        }
      }
    }
  }

  for (int i = 0; i < m; i++) {
    cout << array[i][0] << " " << endl;
  }
}

int main() {
  vector<vector<int>> array = {{10, 20, 30, 40},
                               {50, 60, 70, 80},
                               {90, 100, 110, 120},
                               {130, 140, 150, 160}};

  int m = array.size();
  cout << m << endl;
  int n = array[0].size();
  cout << n << endl;

  cout << endl;

  ReverceN(array, m, n);

  return 0;
}