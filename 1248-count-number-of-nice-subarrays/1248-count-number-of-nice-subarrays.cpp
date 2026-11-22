class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
    }
    int count(vector<int>& nums, int k){
        int ans=0,l=0,r=0,temp=0;
        for(r=0;r<nums.size();r++){
            if(nums[r]&1) temp++;
            while(temp>k){
                if(nums[l]&1) temp--;
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};