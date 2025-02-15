#include <iostream>
using namespace std;
void findDiiffs(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] - arr[i + 1] << endl;
  }
}

int main() {
  int marks[5] = {10, 8, 5, 9, 1};
  findDiiffs(marks, 5);
  return 0;
}