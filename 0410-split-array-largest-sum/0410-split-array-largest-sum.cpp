class Solution {
    int countSplits(vector<int>& nums, int k){
        int split=1;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            if(count+nums[i]<=k) count+=nums[i];
            else{
                split++;
                count=nums[i];
            }

        }
        return split;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int low=INT_MIN,high=0;
        for(int i=0;i<nums.size();i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high){
            long long mid=(low*1LL+high*1LL)/2;
            if(countSplits(nums,mid)<=k){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};