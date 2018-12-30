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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> values;
        if(!root) return vector<vector<int>> {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int> val;
            while(count>0){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                val.push_back(temp->val);
                count--;
            }
            values.push_back(val);
        }
        for(int i=0; i<values.size();i++)
        {
            if(i%2==1) reverse(values[i].begin(), values[i].end());
        }
        return values;
    }
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        bool left_first=true;
        stack<TreeNode*> s1, s2;
        s1.push(root);
        TreeNode* node;
        ans.push_back(vector<int>{root->val});
        while(!s1.empty()){
            vector<int> v;
            left_first = !left_first;
            while(!s1.empty()){
                node = s1.top();
                s1.pop();
                
                if(left_first && node->left != NULL){
                    s2.push(node->left);
                    v.push_back(node->left->val);
                }
                if(node->right != NULL){
                    s2.push(node->right);
                    v.push_back(node->right->val);
                }
                if(!left_first && node->left != NULL){
                    s2.push(node->left);
                    v.push_back(node->left->val);
                }
            }
            if(v.size()) ans.push_back(v);
            swap(s1, s2);
        }
        return ans;
    }
};
