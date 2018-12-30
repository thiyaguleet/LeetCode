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
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        out.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        int diff=INT_MAX;
        inorder(root);
        for(int i=1; i<out.size();i++){
            diff=min(abs(out[i-1]-out[i]), diff);
        }
        return diff;
    }
};

class Solution {
public:
    int min_val = INT_MAX;
    void inorder(TreeNode* root, vector<int>& vec){
        if(root==nullptr) return;
        inorder(root->left,vec); //1. inorder look to left first
        vec.push_back(root->val);//2. append current node val
        if(vec.size()>1)min_val = min(min_val,
                                        *vec.crbegin()-(*(vec.crbegin()+1))
                                     );//on the fly check min value
        inorder(root->right,vec);//3. inorder look to right last
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> vec;
        inorder(root,vec);
        return min_val;
    }
};
