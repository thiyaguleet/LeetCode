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
    int ans=0;
    int rangeSumBST(TreeNode *root, int L, int R) {
        dfs(root, L, R);
        return ans;
    }

    void dfs(TreeNode *node, int L, int R) {
        if (node) {
            if (L <= node->val && node->val <= R)
                ans += node->val;
            if (L < node->val)
                dfs(node->left, L, R);
            if (node->val < R)
                dfs(node->right, L, R);
        }
    }
};
