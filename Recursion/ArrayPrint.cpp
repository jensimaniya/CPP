#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr, int i) {
  if (i < 0) {
    return;
  }
  cout << arr[i] << " ";
  print(arr, arr.size(), i - 1);
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  print(arr, arr.size() - 1);

  return 0;
}
