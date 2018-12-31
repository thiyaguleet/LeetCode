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
        for(int i=0; i<root->children.size();i++){
            helper(root->children[i]);
        }
        out.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        helper(root);
        return out;
    }
};

class Solution {
public:
    vector<int> out;
    vector<int> postorder(Node* root) {
        if(!root) return vector<int> {};
        stack<Node*> stck1, stck2;
        stck1.push(root);
        while(!stck1.empty()){
            Node*temp=stck1.top();
            stck1.pop();
            stck2.push(temp);
            for(auto n:temp->children) stck1.push(n);
        }
        while(!stck2.empty()){
            Node*temp=stck2.top();
            out.push_back(temp->val);
            stck2.pop();
        }
        return out;
    }
};
