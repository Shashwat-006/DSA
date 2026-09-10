/*
 * Problem: 205. Isomorphic Strings
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/isomorphic-strings/submissions/2137974789/
 * Language: cpp
 * Date: 2026-09-10
 */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[256];
        int arr2[256];
        for(int i=0;i<s.length();i++){
            if(arr1[s[i]] != arr2[t[i]]) return false;

            arr1[s[i]] = i+1;
            arr2[t[i]] = i+1;
        }
        return true;
    }
};
