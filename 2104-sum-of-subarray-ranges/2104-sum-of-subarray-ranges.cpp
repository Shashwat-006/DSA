class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> nse(n); //next smaller element
        vector<int> nge(n); //next greater element
        vector<int> pse(n); //previous smaller element
        vector<int> pge(n); //previous greater element
        stack<int> st1;
        for(int i=n-1;i>=0;i--){ //nse
            while(!st1.empty() && nums[st1.top()]>=nums[i]){
                st1.pop();
            }
            nse[i] = !st1.empty()?st1.top():n;
            st1.push(i);
        }
        stack<int> st2;
        for(int i=n-1;i>=0;i--){ //nge
            while(!st2.empty() && nums[st2.top()]<=nums[i]){
                st2.pop();
            }
            nge[i] = !st2.empty()?st2.top():n;
            st2.push(i);
        }
        stack<int> st3;
        for(int i=0;i<n;i++){ //pse
            while(!st3.empty() && nums[st3.top()]>nums[i]){
                st3.pop();
            }
            pse[i] = !st3.empty()?st3.top():-1;
            st3.push(i);
        }
        stack<int> st4;
        for(int i=0;i<n;i++){ //pge
            while(!st4.empty() && nums[st4.top()]<nums[i]){
                st4.pop();
            }
            pge[i] = !st4.empty()?st4.top():-1;
            st4.push(i);
        }

        long long minsum=0;
        for(int i=0;i<n;i++){ //sum of mins
            long long left = i - pse[i];
            long long right = nse[i] - i;
            long long temp = left*right*nums[i];
            minsum +=temp;
        }
        long long maxsum=0;
        for(int i=0;i<n;i++){ //sum of max
            long long left = i - pge[i];
            long long right = nge[i] - i;
            long long temp = left*right*nums[i];
            maxsum +=temp;
        }
        return maxsum-minsum;
     }
};