class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x;
        while(low<=high){
            long long mid=(low*1LL+high*1LL)/2;
            if(mid*mid>x*1LL) high=mid-1;
            else low=mid+1;
        }
        return high;
    }
};