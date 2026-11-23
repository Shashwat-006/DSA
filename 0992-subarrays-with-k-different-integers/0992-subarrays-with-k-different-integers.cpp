class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
    }
    int count(vector<int>&nums, int k){
        int ans=0,l=0,r=0;
        unordered_map<int,int> mpp;
        for(r=0;r<nums.size();r++){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};