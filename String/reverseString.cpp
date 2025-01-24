#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "jensi";
  int n = str.size();

  // Reverse the string using a simple loop
  for (int i = 0; i < n / 2; i++) {
    swap(str[i], str[n - i - 1]);
  }

  cout << str << endl;
  return 0;
}
