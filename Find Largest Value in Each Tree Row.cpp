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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return vector<int> {};
        vector<int> out;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int max=INT_MIN;
            int count=q.size();
            while(count>0){
                TreeNode*temp=q.front();q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                if(temp->val > max) max=temp->val;
                count--;
            }
            out.push_back(max);
        }
        return out;
    }
};
