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
    bool helper(TreeNode* root, int val){
        if(!root) return true;
        if(root->val!=val) return false;
        return helper(root->right, val) && helper(root->left, val);
    }
    bool isUnivalTree(TreeNode* root) {
        return helper(root, root->val);
    }
};
