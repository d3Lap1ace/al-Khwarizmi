#include<iostream>
#include<string>
using namespace std;

int main(){
    string word2 = "asdf";
    string word1 = "abc";


    class Solution {
        public:
            string mergeAlternately(string word1, string word2) {
                string result;
                int i = 0, j = 0;
                while (i < word1.size() || j < word2.size()) {
                    if (i < word1.size()) {
                        result += word1[i++];
                    }
                    if (j < word2.size()) {
                        result += word2[j++];
                    }
                }
                return result;
            }
    };
    
    Solution sol;
    string merged = sol.mergeAlternately(word1, word2);
    cout << "Merged: " << merged << endl;
    return 0;
}

