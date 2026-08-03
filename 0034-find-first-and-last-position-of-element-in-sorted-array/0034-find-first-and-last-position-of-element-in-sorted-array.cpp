class Solution {
    int first_occurance(vector<int>& nums,int n,int target){
        int low=0,high=n-1,first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return first;
    }
    int last_occurance(vector<int>& nums,int n,int target){
        int low=0,high=n-1,last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occurance(nums,nums.size(),target);
        if(first==-1) return {-1,-1};
        int last=last_occurance(nums,nums.size(),target);
        return{first,last};
    }
};