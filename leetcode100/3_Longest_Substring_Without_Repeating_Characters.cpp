#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int n = s.size();
    if (n <= 1) {
      return n;
    }
    int ans = 0, left = 0;
    unordered_set<char> window;
    for (int right = 0; right < n; right++) {
      char c = s[right];
      while (window.count(c)) {
        window.erase(s[left++]);
      }
      window.insert(c);
      ans = max(ans, right - left + 1);
    }
    return ans;
  }
};

int main() {
  Solution sol;
  // 测试用例
  cout << sol.lengthOfLongestSubstring("abcabcbb") << endl;
  cout << sol.lengthOfLongestSubstring("bbbbb") << endl;
  cout << sol.lengthOfLongestSubstring("pwwkew") << endl;
  cout << sol.lengthOfLongestSubstring("") << endl;
  cout << sol.lengthOfLongestSubstring("au") << endl;
  return 0;
}
