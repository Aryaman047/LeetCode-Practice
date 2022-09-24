/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> path;
        string route ="";
        if (root==NULL) return path;
        
        route+=to_string(root->val);
        find_paths(root,route,path);
        
        return path;
        
    }
    
    
    void find_paths(TreeNode* root,string s, vector<string>& path)
    {
        
     
        if(root->left==NULL && root->right==NULL)
        {
            path.push_back(s);
            return;
        }

      if(root->left)  find_paths(root->left, s+"->"+to_string(root->left->val) , path);
       if(root->right) find_paths(root->right,   s+"->"+to_string(root->right->val) ,path);
        
        
        
        
        
    }
    
    
    
};