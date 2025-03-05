#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main() {
  vector<int> numbers = {1, 2, 3,  4,  5,  5,  5,  6,  7,  7, 8,
                         8, 9, 10, 11, 12, 13, 13, 14, 15, 15};
  set<int> val;
  for (int x : numbers) {
    val.insert(x);
  }
  cout << val.size() << endl;

  for (int x : val) {
    cout<<x<<" ";
  }

  return 0;
}