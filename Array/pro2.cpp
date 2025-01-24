#include <iostream>
using namespace std;

int oddvalue(int arr[]) {
  for (int i = 0; i < 5; i++) {
    if (i % 2 == 1) {
      cout << i << ":" << arr[i] << endl;
    }
  }
}

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  cout << "odd number is :" << endl;
  oddvalue(arr);
  return 0;
}