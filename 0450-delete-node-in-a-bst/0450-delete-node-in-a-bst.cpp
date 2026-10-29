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
    TreeNode* deletion(TreeNode* node){
        if(node->left==NULL) return node->right;
        else if(node->right==NULL) return node->left;
        TreeNode* rightChild= node->right;
        TreeNode* lastRight = node->left;
        while(lastRight->right!=NULL){
            lastRight=lastRight->right;
        }
        lastRight->right=rightChild;
        return node->left;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key) return deletion(root);
        TreeNode* node = root;
        TreeNode* parent = root;
        while(node!=NULL && node->val!=key){
            if(node->val<key){
                parent = node;
                node=node->right;
            } 
            else {
                parent = node;
                node=node->left;
            }
        }
        if(node==NULL) return root;
        else {
            if(parent->left==node) parent->left=deletion(node);
            else parent->right=deletion(node);
        }
        return root;
    }
};