class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n= arr.size();
        vector<int> nse(n);
        stack<int> st1,st2;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[st1.top()]>=arr[i]){
                st1.pop();
            } 
            nse[i] = st1.empty()? n:st1.top();
            st1.push(i);
        }
        vector<int> pse(n);
        for(int i=0;i<n;i++){
            while(!st2.empty() && arr[st2.top()]>arr[i]){
                st2.pop();
            }
            pse[i] = st2.empty()? -1:st2.top();
            st2.push(i);
        }
        int ans = 0;
        int mod = (int)(1e9+7);
        for(int i=0;i<n;i++){
            int left = i-pse[i];
            int right = nse[i]-i;
            ans = (ans+(right*left*1LL*arr[i])%mod)%mod;
        }
        return ans;
    }
};