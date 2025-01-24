#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<vector<int>> array = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = array.size();
  cout << "rows : " << rows << endl;

  int cols = array[0].size();
  cout << "cols : " << cols << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
