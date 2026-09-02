/*
 * Problem: 1910. Remove All Occurrences of a Substring
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/submissions/2128453105/
 * Language: cpp
 * Date: 2026-09-02
 */

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int e_size = part.length();
        while(s.find(part)<s.length()){
            s.erase(s.find(part),e_size);
        }
        return s;
    }
};
