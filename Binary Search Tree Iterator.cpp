/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<int> values;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    /** @return the next smallest number */
    int next() {
        int val=this->values.top();
        this->values.pop();
        return val; 
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(this->values.size()!=0) return true;
        return false;
    }
    void inorder(TreeNode *root){
        if(!root) return;
        inorder(root->right);
        this->values.push(root->val);
        inorder(root->left);
    }
};

class BSTIterator {
public:
    stack<TreeNode*> iter;
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* tmp=iter.top();
        iter.pop();
        pushall(tmp->right);
        return tmp->val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !iter.empty();
    }
    void pushall(TreeNode *root){
        while(root){
            iter.push(root);
            root=root->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
