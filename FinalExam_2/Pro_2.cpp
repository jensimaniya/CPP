#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSumBruteForce(vector<int> &nums, int target) {
  vector<int> result;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        result.push_back(i);
        result.push_back(j);
        return result;
      }
    }
  }
  return result;
}

vector<int> twoSumOptimized(vector<int> &nums, int target) {
  unordered_map<int, int> s;
  vector<int> result;

  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];

    if (s.find(complement) != s.end()) {
      result.push_back(s[complement]);
      result.push_back(i);
      return result;
    }

    s[nums[i]] = i;
  }

  return result;
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> resultBruteForce = twoSumBruteForce(nums, target);
  if (!resultBruteForce.empty()) {
    cout << "Brute Force - Indices: " << resultBruteForce[0] << ", "
         << resultBruteForce[1] << endl;
  } else {
    cout << "Brute Force - No solution found." << endl;
  }

  vector<int> resultOptimized = twoSumOptimized(nums, target);
  if (!resultOptimized.empty()) {
    cout << "Optimized - Indices: " << resultOptimized[0] << ", "
         << resultOptimized[1] << endl;
  } else {
    cout << "Optimized - No solution found." << endl;
  }

  return 0;
}