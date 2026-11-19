class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int longest=0;
        vector<int> v(256,-1);
        for(int end=0;end<s.length();end++){
            char c=s[end];
            if(v[c]>=start){
                start=v[c]+1;
            }
            v[c]=end;
            longest=max(longest,end-start+1);
        }
        return longest;
    }
};