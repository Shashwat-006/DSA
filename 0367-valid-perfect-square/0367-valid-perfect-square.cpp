class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num;
        while(low<=high){
            long long mid=(low*1LL+high*1LL)/2;
            if(mid*mid==num*1LL) return true;
            if(mid*mid<num*1LL) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};