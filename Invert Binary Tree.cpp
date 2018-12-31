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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        
        queue<TreeNode*> queue;
        queue.push(root);
        
        while (!queue.empty()) {
            TreeNode *curr = queue.front();
            queue.pop();
            
            swap(curr->left, curr->right);
            if (curr->left)
                queue.push(curr->left);
            if (curr->right)
                queue.push(curr->right);
        }
        
        return root;
    }
};

class Solution {
public:
    void helper(TreeNode*root){
        if(!root)return;
        if(root->left && root->right) {
            TreeNode*temp=root->left;
            root->left=root->right;
            root->right=temp;
        }
        else if(!root->right){
            root->right=root->left;
            root->left=NULL;
        }
        else{
            root->left=root->right;
            root->right=NULL;
        }
        helper(root->left);
        helper(root->right);
            
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};
