class Solution {
    int possible(vector<int>& weights,int check){
        int count=0,day=1;
        for(int i=0;i<weights.size();i++){
            if(count+weights[i]>check){
                day+=1;
                count=weights[i];
            }
            else{
                count+=weights[i];
            }
        }
        return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN,high=0;
        for(int i=0;i<weights.size();i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int day=(possible(weights,mid));
            if(day<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};