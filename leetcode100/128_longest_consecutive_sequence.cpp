#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int> &nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int x : st) {
            if (st.contains(x - 1)) {
                continue;
            }
            int y = x + 1;
            while (st.contains(y)) {
                y++;
            }
            ans = max(ans, y - x);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int res = s.longestConsecutive(nums);
    cout << res << endl;
    return 0;
}