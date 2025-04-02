#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2) {
  vector<int> result;
  int i = 0;
  int j = 0;
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] < arr2[j]) {
      result.push_back(arr1[i]);
      i++;
    } else {
      result.push_back(arr2[j]);
      j++;
    }
  }
  return result;
}

int main() {
  vector<int> arr = {3, 5, 10, 20, 50};
  vector<int> arr2 = {4, 9, 12, 15, 40, 60, 70, 80};
  vector<int> result = merge(arr, arr2); 
  for (int val : result) {
    cout << val << " " ;
  }

  return 0;
}