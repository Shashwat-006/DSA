/*
 * Problem: 344. Reverse String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/reverse-string/submissions/2124220057/
 * Language: cpp
 * Date: 2026-08-29
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size()-1;
        while(start<end){
            swap(s[start++],s[end--]);
        }
    }
};
