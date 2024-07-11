package com.leecode.solution;

import java.util.HashSet;

/**
 * @classname al-Khwarizmi
 * @Auther d3Lap1ace
 * @Time 5/15/2024 11:44 AM Wed
 * @description
 * @Version 1.0
 * From the Laplace Demon
 */


public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int ans = 0;
        HashSet<Character> set = new HashSet<>();
        for(int fast = 0, slow = 0; fast < n; ++fast){
            char c = s.charAt(fast);
            if(set.contains(c)){
                slow++;
            }
            set.add(c);
            ans = Math.max(ans,fast-slow+1);
        }
        return ans;
    }
}
