package com.leecode.solution;

import java.util.HashSet;
import java.util.List;

/**
 * @classname al-Khwarizmi
 * @Auther d3Lap1ace
 * @Time 5/15/2024 11:44 AM Wed
 * @description
 * @Version 1.0
 * From the Laplace Demon
 */


public class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int plength = p.length();
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < plength; i++) {
            set.add(p.charAt(i));
        }
        return null;
    }
}
