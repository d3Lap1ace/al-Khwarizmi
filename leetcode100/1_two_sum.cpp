#include <iostream>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0;; ++i) {
            auto it = map.find(target - nums[i]);
            if (it != map.end())
                return {it->second, i};
            map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 3, 11, 15};
    int target = 9;
    vector<int> res = s.twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}
