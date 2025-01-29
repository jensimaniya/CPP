#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(const std::string &s) {
  std::unordered_map<char, int> charIndexMap;
  int maxLength = 0;
  int start = 0;

  for (int end = 0; end < s.length(); ++end) {
    char currentChar = s[end];

    // If the character is found in the map and its index is within the current
    // window
    if (charIndexMap.find(currentChar) != charIndexMap.end() &&
        charIndexMap[currentChar] >= start) {
      // Move the start to the right of the previous index of currentChar
      start = charIndexMap[currentChar] + 1;
    }

    // Update the latest index of the current character
    charIndexMap[currentChar] = end;

    // Calculate the length of the current substring and update maxLength if
    // needed
    maxLength = std::max(maxLength, end - start + 1);
  }

  return maxLength;
}

int main() {
  std::string s;
  std::cout << "Enter a string: ";
  std::getline(std::cin, s);

  int result = lengthOfLongestSubstring(s);
  std::cout
      << "The length of the longest substring without repeating characters is "
      << result << std::endl;

  return 0;
}
