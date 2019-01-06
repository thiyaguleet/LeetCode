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
    void helper(TreeNode*root){
        if(!root) return;
        helper(root->left);
        out.push_back(root->val);
        helper(root->right);
    }
    TreeNode* create_tree(TreeNode*root){
        if(!out.size()) return NULL;
        TreeNode* temp=new TreeNode (out.back());
        out.pop_back();
        temp->right=create_tree(temp);
        return temp;
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return new TreeNode(NULL);
        helper(root);
        reverse(out.begin(), out.end());
        struct TreeNode* temp=new TreeNode (out.back());
        out.pop_back();
        temp->right=create_tree(temp);
        return temp;
        
    }
};

class Solution {

private:
    TreeNode* head = new TreeNode(0);
    TreeNode* p = head;
    
public:
    TreeNode* increasingBST(TreeNode* root) {
        if (!root) 
            return NULL;
        
        increasingBST(root->left);
        p->right = new TreeNode(root->val);   
        p = p->right;
        increasingBST(root->right);
     
        return head->right;
    }    
};
