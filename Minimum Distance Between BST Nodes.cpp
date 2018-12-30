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
    int best{INT32_MAX};
    int temp{INT32_MAX};
    int minDiffInBST(TreeNode* root) {
        helper(root);
        return best;
    }
    void helper(TreeNode* root) {
        if(root->left) {helper(root->left);} // start with the left, which will set temp to max element in left subtree
        if(temp != INT32_MAX) best = min(best, root->val - temp); // Only makes sense if temp is initialized (not int max)
        temp = root->val; // set temp to prev element
        if(root->right) {helper(root->right);} // recurse right, with temp set to cur element (prev of the leftmost node in right subtree)
    }
};
