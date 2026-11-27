class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        if(intervals.size()==1) return 1;
        vector<int> arr;
        vector<int> dep;
        for(int i=0;i<intervals.size();i++){
            arr.push_back(intervals[i][0]);
            dep.push_back(intervals[i][1]);
        }
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,ans=0,count=0;
        while(i<arr.size()){
            if(arr[i]<=dep[j]){
                i++,count++;
                ans=max(ans,count);

            }
            else{
                j++,count--;
            }
        }
        return ans;
    }
};