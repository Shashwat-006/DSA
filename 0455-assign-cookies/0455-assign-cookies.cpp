class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int greed=0,cookie=0;
        while(cookie<s.size() && greed<g.size()){
            if(g[greed]<=s[cookie]){
                greed++,cookie++;
            }
            else cookie++;
        }
        return greed;
    }
};