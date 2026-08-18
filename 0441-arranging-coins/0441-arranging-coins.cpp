class Solution {
public:
    int arrangeCoins(int n) {
        int low=1,high=n;
        while(low<=high){
            long long mid=(low*1LL+high*1LL)/2;
            long long temp=mid*(mid+1);
            if(temp/2<=n) low=mid+1;
            else high =mid-1;

        }
        return high;
    }
};