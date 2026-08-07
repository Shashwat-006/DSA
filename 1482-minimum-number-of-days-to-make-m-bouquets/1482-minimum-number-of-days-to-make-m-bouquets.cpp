class Solution {
    bool possible(vector<int>& bloomDay,int check,int m,int k){
        int count=0,bouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=check) count++;
            else {
                bouquets+=(count/k);
                count=0;
            }
        }
        bouquets+=(count/k);
        return bouquets>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=m*1LL * k*1LL;
        if(n>bloomDay.size()) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};