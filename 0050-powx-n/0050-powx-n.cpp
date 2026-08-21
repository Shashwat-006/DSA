class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x = 1/x;
            N= -N;
        } 
        double ans = 1;
        while(N>0){
            if(N&1) ans= ans*x; //if N is odd, we multiply to use the part that will get removed after dividing n by 2
            x = x* x; //instead of multiplying by 2 , we grow exponentially
            N = N>>1; //dividing by 2 since we're growing exponentially with 2
        }
        return ans;
    }
};