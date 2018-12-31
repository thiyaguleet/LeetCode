/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return vector<vector<int>>{};
        vector<vector<int>> out;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int> val;
            while(count>0){
                Node*temp=q.front();
                q.pop();
                for(auto n: temp->children) q.push(n);
                val.push_back(temp->val);
                count--;
            }
            out.push_back(val);
        }
        return out;
    }
};
