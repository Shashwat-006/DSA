class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
            else c=i;
            int left=min({a,b,c});
            int right=max({a,b,c});
            if(left!=-1) ans+=left+1;
        }
        return ans;
    }
};