class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start=0,end=0;
        unordered_map<int,int> mpp;
        int n=fruits.size();
        for(end=0;end<n;end++){
            mpp[fruits[end]]++;
            if(mpp.size()>2){
                mpp[fruits[start]]--;
                if(mpp[fruits[start]]==0) mpp.erase(fruits[start]);
                start++;
            }
        }
        return n-start;
    }
};