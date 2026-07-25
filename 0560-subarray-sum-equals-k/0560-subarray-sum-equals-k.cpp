class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int count=0,pre_sum=0;
        for(int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            int rem=pre_sum-k;
            count+=mpp[rem];
            mpp[pre_sum]++;
        }
        return count;
    }
};