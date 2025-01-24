#include <iostream>
#include <string>
using namespace std;
bool IsPalindrome(string str) {
  string str2;
  for (int i = str.length() - 1; i >= 0; i--) {
    str2 += str[i];
  }
  return str2 == str;
}

int main() {
  string str = "nayan";
  bool result = IsPalindrome(str);
  cout << result << endl;
  return 0;
}