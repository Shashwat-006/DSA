class Solution {
public:
    int target_index(vector<int> nums,int left,int right,int target){
        int mid=(left+right)/2,out;
        if(target<nums[mid]){
            out=target_index(nums,0,mid-1,target);
        }
        else if(target==nums[mid]){
            return mid;
        }
        else{
            if(target>nums[right]){
                return right+1;
            }
            out=target_index(nums,mid+1,right,target);
        }
        return out;
    }
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        if(target<nums[left]) return 0;
        if(target>nums[right]) return right+1;
        int mid=(left+right)/2,out;
        if(target<nums[mid]){
            out=target_index(nums,0,mid-1,target);
        }
        else if(target==nums[mid]){
            return mid;
        }
        else{
            if(target>nums[right]){
                return right+1;
            }
            out=target_index(nums,mid+1,right,target);
        }
        return out;
    }
};