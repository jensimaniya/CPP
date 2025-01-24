#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<vector<int>> matrix = {{1, 0, 1}, {0, 1, 1}, {1, 1, 1}};

  int rowToCheck = 2;

  if (rowToCheck < 0 || rowToCheck >= matrix.size()) {
    cout << "Invalid row index!" << endl;
    return 1;
  }

  int count = 0;
  for (int i = 0; i < matrix[rowToCheck].size(); i++) {
    if (matrix[rowToCheck][i] == 1) {
      count++;
    }
  }

  cout << "Row " << rowToCheck << " ma '1' ni sankhya: " << count << endl;

  return 0;
}
