class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        
        int l = 0, r = n - 1;
        int lmax = height[0], rmax = height[n-1];
        int ans = 0;
        
        while(l < r){
            if(height[l] <= height[r]){
                if(height[l] < lmax){
                    ans += lmax - height[l];
                    l++;
                }
                else if(height[l] >= lmax){
                    lmax = height[l];
                    l++;
                }
            }
            else{
                if(height[r] < rmax){
                    ans += rmax - height[r];
                    r--;
                }
                else if(height[r] >= rmax){
                    rmax = height[r];
                    r--;
                }
            }
        }
        return ans;
    }
};