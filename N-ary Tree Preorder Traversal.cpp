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
    vector<int> out;
    void helper(Node* root){
        if(!root) return;
        out.push_back(root->val);
        for(int i=0; i<root->children.size();i++){
            helper(root->children[i]);
        }
    }
    vector<int> preorder(Node* root) {
        helper(root);
        return out;
    }
};
class Solution {
public:
    vector<int> out;
    vector<int> preorder(Node* root) {
        if(!root) return vector<int> {};
        stack<Node*> stck;
        stck.push(root);
        while(!stck.empty()){
            Node*temp=stck.top();
            stck.pop();
            for(int i=temp->children.size()-1; i>=0; i--) stck.push(temp->children[i]);
            out.push_back(temp->val);
        }
        return out;
    }
};
