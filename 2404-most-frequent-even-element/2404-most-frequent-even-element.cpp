class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mpp[nums[i]]++;
            }
        }
        int maxi=INT_MIN,ele;
        for(auto it:mpp){
            if(it.second>maxi) {
                maxi=it.second;
                ele=it.first;
            }
        }
        if(mpp.empty()) return -1;
        return ele;
    }
};