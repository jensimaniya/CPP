#include <iostream>
#include <vector>
using namespace std;
int nearestValue(vector<int> arr, int t, int i, int j) {
  int start =0 ;
  int end = arr.size() - 1;
  int result = -1;
  while (start <= end) {
    int mid = int((start + end) / 2);
    if (arr[mid ]== t) {
      return mid;
    } else if (arr[mid] > t) {
      end = mid - 1;
    } else {
      result = mid;
      start = mid + 1;
    }
  }
  return result;
}

int main() {
  vector<int> arr = {6, 7, 20, 30, 40, 100};

  int result = nearestValue(arr,35, 0, arr.size() - 1);
  cout<<arr[result]<<endl;

  return 0;
}