class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string>ans={""};
        map<char,string>mpp;
        mpp['2']="abc";
        mpp['3']="def";
        mpp['4']="ghi";
        mpp['5']="jkl";
        mpp['6']="mno";
        mpp['7']="pqrs";
        mpp['8']="tuv";
        mpp['9']="wxyz";
        for(char digit:digits){
            vector<string>temp;
            for(string out:ans){
                for(char next:mpp[digit]){
                    temp.push_back(out+next);
                }
            }
            ans=temp;
        }
        return ans;
    }
};