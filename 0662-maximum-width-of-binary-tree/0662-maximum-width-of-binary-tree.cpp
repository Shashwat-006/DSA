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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        long long diff=0;
        q.push({root,1}); 
        while(!q.empty()){
            int s = q.size();
            long long low = q.front().second;
            long long high;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front().first;
                long long val = q.front().second-low;
                high = val+low;
                q.pop();
                if(node->left!=NULL) q.push({node->left,2*val}); 
                if(node->right!=NULL) q.push({node->right,2*val+1}); 
            }
            diff = max(diff, high-low+1);
        }
        return diff;
    }
};