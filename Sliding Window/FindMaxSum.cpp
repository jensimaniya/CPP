#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int findMaxValue(vector<int> arr, int k) {
  int curr = 0;
  int max = 0;
  for (int i = 0; i < k; i++) {
    curr += arr[i];
  }
  max = curr;
  for (int i = k; i < arr.size(); i++) {
    curr += arr[i];
    curr -= arr[i - k];
    if (curr > max) {
      max = curr;
    }
  }
  return max;
}

int main() {
  vector<int> arr = {1, 2, -3, 4, -3, 4, -3, 5, 9, -20, 2, 10};
  int k;
  cin >> k;

  int result = findMaxValue(arr, k);
  cout << result << endl;

  return 0;
}