class Solution {
public:
int findMax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long timeCheck(vector<int>& piles,int hourly){
        long long total_time=0;
        for(int i=0;i<piles.size();i++){
            total_time+=(piles[i]+hourly-1)/hourly;
        }
        return total_time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long hour=timeCheck(piles,mid);
            if(hour<=h) high=mid-1;
            else low=mid+1;
        }
        return high+1;
    }
};