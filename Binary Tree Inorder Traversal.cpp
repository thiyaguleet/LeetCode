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
    void inorder(TreeNode * root){
        if(root==NULL) return;
        inorder(root->left);
        out.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return out;
    }
};

class Solution {
public:
    vector<int> out;
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> stck;
        TreeNode * cur=root;
        while(cur!=NULL || stck.empty()==false){
            while(cur!=NULL){
                stck.push(cur);
                cur=cur->left;
            }
            cur=stck.top();
            stck.pop();
            out.push_back(cur->val);
            cur=cur->right;
        }
        return out;
    }
};
