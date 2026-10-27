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
    int preIndex=0;
    int inIndex=0;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder,INT_MIN);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int stopValue){
        if(preIndex==preorder.size() || inorder[inIndex] == stopValue) return NULL;
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        root->left = build(preorder,inorder,root->val);
        inIndex++;
        root->right = build(preorder,inorder,stopValue);
        return root;
    }
};