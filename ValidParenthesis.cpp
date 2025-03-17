#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    vector<char> stk;
    for (char c : s) {
      switch (c) {
      case '(':
      case '{':
      case '[':
        stk.push_back(c);
        break;
      case ')':
        if (stk.empty() || stk.back() != '(')
          return false;
        stk.pop_back();
        break;
      case '}':
        if (stk.empty() || stk.back() != '{')
          return false;
        stk.pop_back();
        break;
      case ']':
        if (stk.empty() || stk.back() != '[')
          return false;
        stk.pop_back();
        break;
      }
    }
    return stk.empty();
  }
};

int main() {
  Solution tester;
  cout << boolalpha << tester.isValid("([])") << "\n";
  cout << boolalpha << tester.isValid("([})") << "\n";
}