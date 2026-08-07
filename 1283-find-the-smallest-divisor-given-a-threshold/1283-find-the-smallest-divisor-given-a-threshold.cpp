class Solution {
    int possible(vector<int>& nums, int limit,int check){
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=ceil(double(nums[i])/double(check));
        }
        return count<=limit;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=INT_MIN;
        for(int i=0;i<nums.size();i++){
            high=max(high,nums[i]);
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,threshold,mid)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};