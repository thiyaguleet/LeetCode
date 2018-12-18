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
    void postorder(TreeNode* root){
        if (root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        out.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return out;
    }
};
class Solution {
public:
    vector<int> out;
    vector<int> postorderTraversal(TreeNode* root) {
        if (root==NULL) return vector<int> {};
        stack<TreeNode *> stck1, stck2;
        stck1.push(root);
        while(stck1.empty()==false){
            struct TreeNode * node=stck1.top();
            stck1.pop();
            stck2.push(node);
            if (node->left) stck1.push(node->left);
            if (node->right) stck1.push(node->right);
        }
        while(stck2.empty()==false){
            out.push_back(stck2.top()->val);
            stck2.pop();
        }
        return out;
    }
};
