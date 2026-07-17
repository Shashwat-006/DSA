class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return ;
        }
        else if(n<k){
            k=k%n;
        }
        vector<int> v;
        for(int i=n-k;i<n;i++){
            v.push_back(nums[i]);
        } 
        for(int j=n-k-1;j>=0;j--){
            nums[j+k]=nums[j];
        }
        
        for(int i=0;i<k;i++){
            nums[i]=v[i];
        }
    }
};