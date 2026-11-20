class Solution {
public:
    int characterReplacement(string s, int k) {
        int arr[26]={0};
        int maxlen=0,start=0,end=0,maxfreq=0;
        while(end<s.length()){
            arr[s[end]-'A']++;
            maxfreq=max(maxfreq,arr[s[end]-'A']);
            while(maxfreq+k<end-start+1){
                arr[s[start]-'A']--;
                start++;
            }
            
            maxlen=max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};