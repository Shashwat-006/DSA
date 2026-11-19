class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int end=0,start=0;
        int longest=0;
        string temp="";
        int arr[128]={0};
        while(end<s.length()){
            if(arr[s[end]]==0){
                arr[s[end]]++;
                temp+=s[end];
                longest=max(longest,end-start+1);
                end++;
            }
            else{
                temp = temp.substr(1);
                arr[s[start]]--;
                start++;
                
            }
        }
        return longest;
    }
};