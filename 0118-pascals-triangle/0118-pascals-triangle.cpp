class Solution {
public:
    vector<int> eachRow(int row){
        vector<int> temp;
        long long ans=1;
        temp.push_back(1);
        for(int i=1;i<row;i++){
            ans*=(row-i);
            ans/=i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out;
        for(int col=1;col<=numRows;col++){
            out.push_back(eachRow(col));
        }
        return out;
    }
};