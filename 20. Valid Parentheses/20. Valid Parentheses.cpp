/*
 * Problem: 20. Valid Parentheses
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-parentheses/submissions/2146157356/
 * Language: cpp
 * Date: 2026-09-18
 */

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false;
                if(s[i]==')' && st.top()!='(') return false;
                if(s[i]=='}' && st.top()!='{') return false;
                if(s[i]==']' && st.top()!='[') return false;
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;;
    }
};
