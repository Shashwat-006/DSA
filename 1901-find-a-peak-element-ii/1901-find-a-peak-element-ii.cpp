class Solution {
    int findMax(vector<int>& mat,int col){
        int maxi=INT_MIN,ind=-1;
        for(int i=0;i<mat.size();i++){
            if(mat[i]>maxi){
                maxi=mat[i];
                ind=i;
            }

        }
        return ind;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();

        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            
            int index=findMax(mat[mid],mid);
            int top= mid-1>=0? mat[mid-1][index] : -1;
            int bottom= mid+1<n? mat[mid+1][index] : -1;
            if(mat[mid][index]>top && mat[mid][index]>bottom) return {mid,index};
            else if(mat[mid][index]<top) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};