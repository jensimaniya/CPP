#include <iostream>
#include <string>
using namespace std;

void GenSubString(string str) {
  int count = 0;

  for (int i = 0; i < str.length(); i++) {
    string substr = "";

    for (int j = i; j < str.length(); j++) {
      substr += str[j];

      cout << substr << endl;

      if (substr.length() > 1 && substr[0] == substr[substr.length() - 1]) {
        count++;
      }
    }
  }
  cout << "count : " << count << endl;
}

int main() {
  string str = "ABCAB";

  GenSubString(str);

  return 0;
}