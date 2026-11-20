class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0,zeros=0,start=0,end=0;
        int n=nums.size();
        while(end<n){
            if(nums[end]==0) zeros++;
            if(zeros>k){
                if(nums[start]==0) zeros--;
                start++;
            }
            end++;
        }
        return n-start;
    }
};