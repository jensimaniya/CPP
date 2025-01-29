// #include <iostream>
// #include <string>
// using namespace std;
// bool IsPalindrome(string str) {
//   string str2;
//   for (int i = str.length() - 1; i >= 0; i--) {
//     str2 += str[i];
//   }
//   return str2 == str;
// }

// int main() {
//   string str = "nayan";
//   bool result = IsPalindrome(str);
//   cout << result << endl;
//   return 0;
// }

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str) {
  int n = str.size();
  for (int i = 0; i < n / 2; ++i) {
    if (str[i] != str[n - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  if (isPalindrome(input)) {
    cout << "\"" << input << "\" is a palindrome.\n";
  } else {
    cout << "\"" << input << "\" is not a palindrome.\n";
  }

  return 0;
}
