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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        if (!root->right && !root->left) return true;
        queue<TreeNode *> q;
        q.push(root);
        q.push(root);
        TreeNode *left, *right;
        while(!q.empty()){
            struct TreeNode* node1 = q.front();
            q.pop();
            struct TreeNode* node2 = q.front();
            q.pop();
            
            if(node1->val!=node2->val) return false;
            if(node1->left && node2->right) {
                q.push(node1->left);
                q.push(node2->right);
            }
            else if(node1->left || node2->right) return false;
            
            if(node1->right && node2->left){
                q.push(node1->right);
                q.push(node2->left);
            }
            
            else if(node1->right || node2->left) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
    
    bool isMirror(TreeNode* root1, TreeNode* root2){
        if(root1==NULL && root2==NULL) return true;
        if(root1==NULL || root2==NULL) return false;
        return (root1->val == root2->val) && isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
    }
};
