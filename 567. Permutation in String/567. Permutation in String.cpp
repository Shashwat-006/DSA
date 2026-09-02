/*
 * Problem: 567. Permutation in String
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/permutation-in-string/submissions/2128992554/
 * Language: cpp
 * Date: 2026-09-02
 */

class Solution {
    bool compArr(int arr1[], int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]) return false; 
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int l1=s1.length();
        int arr1[26]={0};
        for(int i=0;i<s1.length();i++){
            arr1[s1[i] - 'a']++;
        }
        int l2 = s2.length();
        int arr2[26]={0};
        for(int i=0;i<l1;i++){
            arr2[s2[i] - 'a']++;
        }
        if(compArr(arr1,arr2)) return true;
        for(int i=l1;i<l2;i++){
            arr2[s2[i-l1] -'a']--;
            arr2[s2[i] - 'a']++;
            if(compArr(arr1,arr2)) return true;
        }
        return false;
    }
};
