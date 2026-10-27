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
    int inIndex,postIndex;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        inIndex = inorder.size()-1;
        postIndex = postorder.size()-1;
        return build(inorder,postorder,INT_MIN);
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int stopValue){
        if(postIndex<0 || inorder[inIndex]==stopValue) return NULL;
        TreeNode* root = new TreeNode(postorder[postIndex--]);
        root->right = build(inorder,postorder,root->val);
        inIndex--;
        root->left = build(inorder,postorder,stopValue);
        return root;
    }
};