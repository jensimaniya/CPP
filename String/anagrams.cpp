#include <algorithm>
#include <iostream>

using namespace std;

bool areAnagrams(string str1, string str2) {
  // If lengths are not the same, they cannot be anagrams
  if (str1.size() != str2.size()) {
    return false;
  }

  // Sort both strings
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  // Compare sorted strings
  return str1 == str2;
}

int main() {
  string str1 = "listen";
  string str2 = "silent";

  if (areAnagrams(str1, str2)) {
    cout << "The strings are anagrams." << endl;
  } else {
    cout << "The strings are not anagrams." << endl;
  }

  return 0;
}
