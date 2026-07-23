class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest=1,count=0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                count=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x++;
                }
            }
            longest=max(longest,count);
            
        }
        return longest;
    }
};