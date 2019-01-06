/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void leaf_nodes(TreeNode* root, vector<int>& r){
        if(!root) return;
        if(!root->left && !root->right) r.push_back(root->val);
        leaf_nodes(root->left, r);
        leaf_nodes(root->right, r);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        leaf_nodes(root1, r1);
        leaf_nodes(root2, r2);
        return r1==r2;
        
    }
}; 
