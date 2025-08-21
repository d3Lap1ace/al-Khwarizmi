#include <iostream>
using namespace std;
class Solution {
 public:
  vector<int> findAnagrams(string s, string p) {
    int plen = p.size();
    int slen = s.size();
    if (slen < plen) {
      return {};
    }
    vector<int> ans;
    vector<int> sCount(26, 0), pCount(26, 0);
    for (int i = 0; i < plen; i++) {
      ++sCount[s[i] - 'a'];
      ++pCount[s[i] - 'a'];
    }
    if (sCount == pCount) ans.push_back(0);
    for (int i = 0; i < slen - plen; i++) {
      --sCount[s[i] - 'a'];
      ++pCount[s[i + plen] - 'a'];
      if (sCount == pCount) ans.push_back(i + 1);
    }
    return ans;
  }
};

int main() { return 0; }
