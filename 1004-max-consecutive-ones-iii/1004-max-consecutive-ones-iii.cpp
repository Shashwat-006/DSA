class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int> q;
        int maxlen=0,zeros=0,start=0,end=0;
        int n=nums.size();
        while(end<n){
            if(nums[end]==0){
                if(k==0){
                    start=end+1;
                }
                else if(zeros==k){
                    start=q.front()+1;
                    q.pop();
                    q.push(end);
                    maxlen=max(maxlen,end-start+1);
                }
                else{
                    q.push(end);
                    zeros++;
                    maxlen=max(maxlen,end-start+1);
                }
                end++;
            }
            else{
                
                maxlen=max(maxlen,end-start+1);
                end++;
            }
        }
        return maxlen;
    }
};