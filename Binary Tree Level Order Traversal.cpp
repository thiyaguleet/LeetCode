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
    vector<vector<int>> out;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==NULL) return vector<vector<int>> {};
        queue <TreeNode *> que;
        que.push(root);
        while(que.empty()==false){
            int nodecount=que.size();
            vector<int> level;
            while(nodecount>0){
                struct TreeNode * node=que.front();
                que.pop();
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
                level.push_back(node->val);
                nodecount--;
            }
            out.push_back(level);
        }
    return out;
    }
};
