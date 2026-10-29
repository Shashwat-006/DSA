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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp =new TreeNode(val);
        if(root==NULL) return temp;
        TreeNode* node=root;
        bool flag=true;
        while(flag){
            if(node->val>val){
                if(node->left==NULL){
                    node->left=temp;
                    flag = false;
                }
                node = node->left;
            }
            else{
                if(node->right==NULL){
                    node->right = temp;
                    flag=false;
                }
                node=node->right;
            }
        }
        return root;
    }
};