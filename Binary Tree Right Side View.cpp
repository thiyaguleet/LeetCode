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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return vector<int> {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> out;
        while(!q.empty()){
            int count=q.size();
            while(count>0){
                TreeNode*temp=q.front(); q.pop();
                if(count==1) out.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                count--;
            }
        }
        return out;
    }
};
