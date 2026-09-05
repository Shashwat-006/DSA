/*
 * Problem: 1047. Remove All Adjacent Duplicates In String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/2131460651/
 * Language: cpp
 * Date: 2026-09-05
 */

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(int i=0;i<s.length();i++){
            if(!result.empty() && result.back()==s[i]) result.pop_back();
            else result.push_back(s[i]);
        }
        return result;
    }
};
