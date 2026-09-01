/*
 * Problem: 709. To Lower Case
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/to-lower-case/submissions/2126968240/
 * Language: cpp
 * Date: 2026-09-01
 */

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] -'A' +'a';
        }
        return s;
    }
};
