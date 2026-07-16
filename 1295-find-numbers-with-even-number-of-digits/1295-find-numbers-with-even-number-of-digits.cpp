class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digitcount=0;
        for(int i=0;i<nums.size();i++){
            int count=1;
            while(nums[i]/10>0){
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0){
                digitcount++;
            }
        }
        return digitcount;
    }
};