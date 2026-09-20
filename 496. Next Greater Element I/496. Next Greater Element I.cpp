/*
 * Problem: 496. Next Greater Element I
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/next-greater-element-i/submissions/2148112126/
 * Language: cpp
 * Date: 2026-09-20
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> next;
        stack <int> st;
        vector<int> ans;
        int s1=nums1.size()-1;
        int s2=nums2.size()-1;
        for(int i=s2;i>=0;i--){
            int current = nums2[i];
            while(!st.empty() && st.top()<=current){
                st.pop();
            }
            if(st.empty()) next[current] = -1;
            else{
                next[current] = st.top();
            }
            st.push(current);
        }
        for(int i=0;i<=s1;i++){
            ans.push_back(next[nums1[i]]);
        }
        return ans;
    }
};
