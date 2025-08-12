#include <iostream>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        size_t slow = 0; // 指向下一个要放非零的下标
        int n = nums.size();
        for (size_t fast = 0; fast < n; ++fast) {
            if (nums[fast] != 0) {
                if (slow != fast) // 避免自交换
                    std::swap(nums[slow], nums[fast]);
                ++slow;
            }
        }
    }
};

int main() {

    vector<int> nums = {1, 0, 0, 0, 0, 3, 2, 2};

    Solution s;
    s.moveZeroes(nums);
    for (int x : nums) {
        cout << x << endl;
    }
    return 0;
}
