#include <iostream>
using namespace std;

void findPair(int arr[], int n, int target) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        cout << "Pair found at indices: " << i << " and " << j << endl;
        return; // Return as soon as a pair is found
      }
    }
  }
  cout << "No pair found." << endl; // If no pair is found
}
   
int main() {
  int marks[5] = {10, 20, 30, 40, 50};
  int t;
  cin >> t;

  findPair(marks, 5, t); // Call function to find the pair

  return 0;
}
