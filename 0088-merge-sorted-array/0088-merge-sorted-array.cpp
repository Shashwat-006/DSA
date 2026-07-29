class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            int x=0;
            while(x<n){
                nums1[x]=nums2[x];
                x++;
            }
            return;
        }
        int x=nums1.size() - 1;
        int left=m-1,right=0;
        int index=left+1;
        while(left>=0 && right<n){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                left--,right++;
            }
            else{
                break;
            }
        }
        right=0;
        while(right<n){
            nums1[index]=nums2[right];
            index++,right++;
        }
        sort(nums1.begin(),nums1.end());
    }
};