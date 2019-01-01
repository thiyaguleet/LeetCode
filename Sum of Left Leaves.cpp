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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count, sum=0;
        while(!q.empty()){
            count=q.size();
            int i=0;
            while(count>0){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                if(temp->left && !temp->left->left && !temp->left->right) sum+=temp->left->val;
                i++;
                count--;
            }
        }
        return sum;
    }
};
