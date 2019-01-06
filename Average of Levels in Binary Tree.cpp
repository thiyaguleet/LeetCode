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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return vector<double> {};
        queue<TreeNode*> q;
        q.push(root);
        vector<double> out;
        while(!q.empty()){
            int count=q.size();
            int divi=count;
            double _sum=0;
            while(count>0){
                TreeNode * temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                _sum+=temp->val;
                count--;
            }
            out.push_back(_sum/divi);
        }
        return out;
    }
};
