/*
 * Problem: 151. Reverse Words in a String
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/reverse-words-in-a-string/submissions/2129684142/
 * Language: cpp
 * Date: 2026-09-03
 */

class Solution {
    void rev(string& s,int l, int r){
        while(l<r){
            swap(s[l],s[r]);
            l++,r--;
        }
        return ;
    }
public:
    string reverseWords(string s) {
        //removing the messy and unwanted white spaces. Transforming into single space b/w words
        int write=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!= ' '){
                if(write!=0){
                    s[write] = ' ';
                    write++;
                }
                while(i<s.length() && s[i]!=' '){
                    s[write]=s[i];
                    write++,i++;
                }
            }
        }
        s.resize(write);

        //reversing the letters of individual words
        int l=0;
        for(int i=0;i<=s.length();i++){
            if(s[i]==' ' || i==s.length()){
                rev(s,l,i-1);
                l=i+1;
            }
            
        }

        //reversing the whole string to get the wanted o/p
        rev(s,0,s.length()-1);
        return s;
    }
};
