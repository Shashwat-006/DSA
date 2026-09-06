/*
 * Problem: 242. Valid Anagram
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-anagram/submissions/2132525246/
 * Language: cpp
 * Date: 2026-09-06
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i] - 'a']++;
        }
        for(int i=0;i<t.length();i++){
            arr[t[i] -'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0) return false;
        }
        return true;

    }
};
