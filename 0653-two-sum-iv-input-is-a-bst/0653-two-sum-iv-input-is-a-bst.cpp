/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void traverse(TreeNode* node,vector<int>& nums){
        if(node==NULL) return;
        traverse(node->left,nums);
        nums.push_back(node->val);
        traverse(node->right,nums);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        traverse(root,nums);
        int start=0,end=nums.size()-1;
        while(start<end){
            int sum = nums[start]+nums[end];
            if(sum==k) return true;
            else if(sum<k) start++;
            else end--;
        }
        return false;
    }
};