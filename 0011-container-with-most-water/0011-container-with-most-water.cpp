class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high=height.size()-1;
        long long area=0;
        while(low<high){
            int length=min(height[low],height[high]);
            int width=(high-low);
            area=max(area,1LL*length*width);
            if(height[low]<height[high]) low++;
            else high--;
        }
        return int(area);
    }
};