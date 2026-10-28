/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    void buildString(TreeNode* &node, string& s){
        if(node==NULL){
            s+="#,";
            return;
        } 
        
        s+=to_string(node->val)+ ",";
        buildString(node->left,s);
        buildString(node->right,s);
    }
    TreeNode* buildTree(vector<string>& tokens, int& index){
        if(tokens[index] == "#") {
            index++;
            return NULL;
        }
        TreeNode* root=new TreeNode(stoi(tokens[index++]));
        root->left = buildTree(tokens,index);
        root->right = buildTree(tokens,index);
        return root;
    }
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans;
        buildString(root,ans);
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> tokens;
        string token;
        stringstream ss(data);
        while(getline(ss,token,',')){
            tokens.push_back(token);
        }
        int index=0;
        return buildTree(tokens,index);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));