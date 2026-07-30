class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1,suff=1,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            pref=pref*nums[i];
            suff=suff*nums[nums.size()-1-i];
            ans=max(ans,max(suff,pref));
        }
        return ans;
    }
};