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
public:
    bool check(TreeNode* tl,TreeNode* tr){
        if(tl==NULL && tr==NULL) return true;
        if(tl==NULL || tr==NULL) return false;
        if(tl->val!=tr->val) return false;
        return (check(tl->left,tr->right)&& check(tl->right,tr->left)); 
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return check(root->left,root->right);

    }
};