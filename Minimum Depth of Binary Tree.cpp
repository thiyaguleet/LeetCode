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
    int minDepth(TreeNode *root) { 
        // Corner case. Should never be hit unless the code is  
        // called on root = NULL 
        if (root == NULL) 
            return 0; 

        // Base case : Leaf Node. This accounts for height = 1. 
        if (root->left == NULL && root->right == NULL) 
        return 1; 

        // If left subtree is NULL, recur for right subtree 
        if (!root->left) 
        return minDepth(root->right) + 1; 

        // If right subtree is NULL, recur for left subtree 
        if (!root->right) 
        return minDepth(root->left) + 1; 

        return min(minDepth(root->left), minDepth(root->right)) + 1; 
    } 
};
class Solution{
    public:
    int minDepth(TreeNode* root){
        if(!root) return 0;
        queue<TreeNode* > q;
        q.push(root);
        int depth=0;
        while(!q.empty()){
            int count=q.size();
            depth++;
            while(count>0){
                TreeNode* temp=q.front();
                if(!temp->left && !temp->right) return depth;
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                count--;
            }
        }
    }
};
