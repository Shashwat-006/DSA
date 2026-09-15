/*
 * Problem: 443. String Compression
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/string-compression/submissions/2143060246/
 * Language: cpp
 * Date: 2026-09-15
 */

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int idx=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[j]==chars[i]){
                j++;
            }
            chars[idx++]=chars[i];
            if((j-i)>1){ //j is next char or last element whereas i is prev char.
                //converting & saving count of chars in answer.
                string  count = to_string(j-i);
                for(char ch: count){
                    chars[idx++] = ch;
                }
            }
            i=j;
        }
        return idx;
    }
};
