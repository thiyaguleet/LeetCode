/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 //Using Recursion
class Solution {
public:
    vector<int> out;
    void preorder(TreeNode* root){
        if(root==NULL) return;
        out.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return out;
    }
};

//Using iterative method
class Solution {
public:
    vector<int> out;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return vector<int> {};
        stack <TreeNode *> stck;
        stck.push(root);
        while(stck.empty()==false){
            struct TreeNode *node=stck.top();
            out.push_back(node->val);
            stck.pop();
            if(node->right)
                stck.push(node->right);
            if(node->left)
                stck.push(node->left);
        }
        return out;
    }
};
