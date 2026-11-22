class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr[3]={-1,-1,-1};
        int ans=0;
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']=i;
            int left=min({arr[0],arr[1],arr[2]});
            if(left!=-1) ans+=left+1;
        }
        return ans;
    }
};