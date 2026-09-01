/*
 * Problem: 771. Jewels and Stones
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/jewels-and-stones/submissions/2126966500/
 * Language: cpp
 * Date: 2026-09-01
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.length();i++){
            for(int j=0;j<jewels.length();j++){
                if(stones[i]==jewels[j]){
                    count++;
                    break;
                }
                continue;
            }
        }
        return count;
    }
};
