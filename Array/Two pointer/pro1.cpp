#include <iostream>
using namespace std;
int main() {
  int arr[5] = {2, -1, 0, 6, 1};
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int i = 0;
  int j = 4;
  int temp;

  while (i < j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i++;
    j--;
  }

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}