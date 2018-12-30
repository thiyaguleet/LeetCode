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
    int path[1000], i;
    vector<string> out;
    void helper(TreeNode* root, int path[], int pathlen){
        if(!root) return;
        path[pathlen]=root->val;
        pathlen++;
        if(!root->left && !root->right){
            string s;
            for(i=0;i<pathlen;i++){
                s+=path[i];
                s+="->";
            }
            s.pop_back();
            s.pop_back();
            out.push_back(s);
        }
        else{
            if(root->left) helper(root->left, path, pathlen);
            if(root->right) helper(root->right, path, pathlen);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root, path, 0);
        return out;
    }
};

class Solution {
	public:
		vector<string> s;
		string path;
		vector<string> binaryTreePaths(TreeNode* root) {
			if (root == NULL) {
				return s;
			}
			DFS(root, path);
			return s;
		}
	
		void DFS(TreeNode *root, string path) {
            if(!root) return;
            path.append(to_string(root->val)+"->");
            if(!root->right && !root->left) {
                path.pop_back();
                path.pop_back();
                s.push_back(path);
            }
            else {
                DFS(root->left, path);
                DFS(root->right, path);
            }
		}
};
