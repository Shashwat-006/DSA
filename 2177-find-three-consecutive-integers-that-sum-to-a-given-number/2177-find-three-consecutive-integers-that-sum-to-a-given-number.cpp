class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> out;
        long long x=num/3;
        if(num%3!=0) return {};
        out.push_back(x-1);
        out.push_back(x);
        out.push_back(x+1);
        return out;
    }
};