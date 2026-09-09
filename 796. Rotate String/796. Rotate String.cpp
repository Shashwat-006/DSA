/*
 * Problem: 796. Rotate String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/rotate-string/submissions/2136231316/
 * Language: cpp
 * Date: 2026-09-09
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;

        for(int j=0;j<goal.length();j++){
            int a=0;
            if(s[a]==goal[j]){
                int k=j;
                bool isMatch=true;
                {
                    for(int i=k;i<goal.length();i++){
                        if(s[a]!=goal[i]) {
                            isMatch = false;
                            continue;
                        }
                        a++;
                    }
                    for(int i=0;i<k;i++){
                        if(s[a]!=goal[i]) {
                            isMatch = false;
                            continue;
                        }
                        a++;
                    }
                    if(isMatch) return true;
                }
            }
        }
        return false;
    }
};
