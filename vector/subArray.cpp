#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

void printSubArray(vector<int> subArray) {
  for (int i = 0; i < subArray.size(); i++) {
    cout << subArray[i];  
  }
  cout << endl;
}

void genSubArray(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    vector<int> subArray;
    for (int j = i; j < arr.size(); j++) {
      subArray.push_back(arr[j]);
      printSubArray(subArray);
    }
  }
}
int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  genSubArray(arr);

  return 0;
}