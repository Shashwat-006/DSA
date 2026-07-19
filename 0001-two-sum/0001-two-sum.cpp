class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int req=target - n;
            if(mpp.find(req)!=mpp.end()){
                return {mpp[req],i};
            }
            else{
                mpp[n]=i;
            }
        }
        return {};
    }
};