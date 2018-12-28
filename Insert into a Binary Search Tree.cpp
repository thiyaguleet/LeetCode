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
     TreeNode* insertIntoBST(TreeNode* root, int val) {
         TreeNode* cur=root;
         bool flag=true;
         while(root&&flag){
             if(val < root->val && root->left) root=root->left;
             else if(root->right) root=root->right;
             else flag=false;
            
         }
         TreeNode* temp= new TreeNode(val);
         if(val<root->val) root->left=temp;
         else root->right=temp;
         return cur;
     }
};

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        if(val == root->val) return root;
        else if(val < root->val) root->left = insertIntoBST(root->left, val);
        else root->right = insertIntoBST(root->right, val);
        
        return root;
    }
};
