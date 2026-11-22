class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return count(nums,goal)-count(nums,goal-1);
    }
    int count(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int count=0,left=0,right=0,temp=0;
        for(right=0;right<nums.size();right++){
            temp+=nums[right];
            while(temp>goal){
                temp-=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
};