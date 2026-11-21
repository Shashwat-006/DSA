class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start=0,end=0,maxlen=0;
        unordered_map<int,int> mpp;
        int n=fruits.size();
        for(end=0;end<n;end++){
            mpp[fruits[end]]++;
            while(mpp.size()>2){
                mpp[fruits[start]]--;
                if(mpp[fruits[start]]==0) mpp.erase(fruits[start]);
                start++;
            }
            maxlen=max(maxlen,end-start+1);
        }
        return maxlen;
    }
};