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
    void find(TreeNode* &node,int k, int& counter, int& ans){
        if(node==NULL) return;
        find(node->left,k,counter,ans);
        counter++;
        if(counter==k){
            ans=node->val;
            return;
        }
        find(node->right,k,counter,ans);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int counter=0;
        find(root,k,counter,ans);
        return ans;
    }
};