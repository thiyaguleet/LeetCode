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
    vector<int> out;
    bool findTarget(TreeNode* root, int k) {
        in_order(root);
        int l=0, r=out.size()-1;
        while(l<r){
            int sum=out[l]+out[r];
            if(sum == k) return true;
            if(sum< k) l++;
            else r--;
        }
        return false;
    }
    void in_order(TreeNode*root){
        if(!root) return;
        in_order(root->left);
        out.push_back(root->val);
        in_order(root->right);
    }
};
