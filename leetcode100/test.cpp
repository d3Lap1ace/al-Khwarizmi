#include <iostream>
#include <string>
using namespace std;
#include <vector>            
#include <unordered_map> 
#include <algorithm>

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){

        unordered_map<string,vector<string>> mp;

        for(string &s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(s);
        }

        vector<vector<string>> ans;
        ans.reserve(mp.size());
        for(auto &[_,value]:mp){
            ans.push_back(value);
        }
        return ans;
    }
};

int main(){

   vector<string> input{"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    auto groups = sol.groupAnagrams(input);
    for (auto &grp : groups) {
        for (auto &w : grp) cout << w << ' ';
        
        cout << "\n";
    }
    return 0;
}