class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l= n-k;
        long long total=0;
        if(n-k==0){
            for(int i=0;i<n;i++){
                total+=cardPoints[i];
            }
            return total;
        }
        long long curr_sum=0;
        for(int i=0;i<l;i++){
            curr_sum+=cardPoints[i];
        }
        long long min_sum=curr_sum;
        total=curr_sum;
        for(int i=l;i<n;i++){
            total+=cardPoints[i];
            curr_sum+=cardPoints[i]-cardPoints[i-l];
            min_sum=min(min_sum,curr_sum);
        }
        return total-min_sum;
    }
};