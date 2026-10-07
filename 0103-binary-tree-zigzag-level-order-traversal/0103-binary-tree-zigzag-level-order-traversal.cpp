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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        stack<TreeNode*> leftst;
        stack<TreeNode*> rightst;
        vector<vector<int>> ans;
        leftst.push(root);
        while(!leftst.empty() || !rightst.empty()){
            vector<int> temp1;
            while(!leftst.empty()){
                TreeNode* curr = leftst.top();
                leftst.pop();
                temp1.push_back(curr->val);
                if(curr->left) rightst.push(curr->left);
                if(curr->right) rightst.push(curr->right);
                
            }
            if(!temp1.empty()) ans.push_back(temp1);
            vector<int> temp2;
            while(!rightst.empty()){
                TreeNode* curr = rightst.top();
                rightst.pop();
                temp2.push_back(curr->val);
                if(curr->right) leftst.push(curr->right);
                if(curr->left) leftst.push(curr->left);
                
            }
            if(!temp2.empty()) ans.push_back(temp2);
        }
        return ans;   
    }
};