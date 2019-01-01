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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        int ans;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp=q.front();
            if(temp->right)q.push(temp->right);
            if(temp->left)q.push(temp->left);
            if(q.size()==1) return q.front()->val;
            q.pop();
        }
    }
};
