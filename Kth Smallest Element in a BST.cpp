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
    stack<TreeNode*>stck;
    void push(TreeNode *root) {
        while (root) {
            stck.push(root); 
            root = root->left;
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        push(root);
        while(--k){
            TreeNode *temp=stck.top();
            stck.pop();
            push(temp->right);
        }
        return stck.top()->val;
    }
};
