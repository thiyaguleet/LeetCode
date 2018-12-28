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
    bool isBST(TreeNode* root, long min, long max){
        if(!root) return true;
        if(root->val <= min || root->val >= max) return false; 
        else return isBST(root->left, min, root->val ) && isBST(root->right, root->val, max);
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root, LONG_MIN, LONG_MAX);
    }
};

class Solution {
public:
    TreeNode * getLast(TreeNode * root) {
        if (!root || !root->left) return NULL;
        TreeNode * last = root->left;
        while (last->right != NULL) last = last->right;
        return last;
    }
    TreeNode * getNext(TreeNode * root) {
        if (!root || !root->right) return NULL;
        TreeNode * next = root->right;
        while (next->left != NULL) next = next->left;
        return next;
    }
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        TreeNode * last = getLast(root);
        if (last && last->val >= root->val) return false;
        TreeNode * next = getNext(root);
        if (next && next->val <= root->val) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};
