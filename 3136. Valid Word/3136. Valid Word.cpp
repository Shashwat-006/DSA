/*
 * Problem: 3136. Valid Word
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-word/submissions/2126984143/
 * Language: cpp
 * Date: 2026-09-01
 */

class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3) return false;
        int vcount=0,ccount=0;
        for(int i=0;i<word.length();i++){
            if((word[i]>='A' && word[i]<='Z')|| (word[i]>='a' && word[i]<='z')){
                if(word[i] == 'a' || word[i] =='e' || word[i] =='i' || word[i] =='o' ||word[i] =='u' || word[i]     =='A'|| word[i] =='E' || word[i] =='I' || word[i] =='O' || word[i] =='U') vcount++;
                else ccount++;
                }
            if(!((word[i]>= '0' && word[i]<='9') || (word[i]>='A' && word[i]<='Z')||(word[i]>='a'&& word[i]<='z'))) return false;
        }
        if((vcount<1) || ccount<1) return false;
        return true;
    }
};
