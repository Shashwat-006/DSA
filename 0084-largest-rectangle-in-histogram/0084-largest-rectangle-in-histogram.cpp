class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> pse(n);
        vector<int> nse(n);
        stack<int> st1;
        for(int i=0;i<n;i++){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            pse[i] = st1.empty()? -1:st1.top();
            st1.push(i);
        }
        stack<int> st2;
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            nse[i] = st2.empty()? n:st2.top();
            st2.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans, heights[i]*(nse[i]-pse[i]-1));
        }
        return ans;
    }
};