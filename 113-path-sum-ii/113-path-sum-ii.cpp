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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        //We have to store the values
        // We apply backtracking
        
        vector<vector <int>>path_list;
        vector<int> route;
        
        find_paths(root,targetSum,route,path_list);
        return path_list;   
    }
    
    
    void find_paths(TreeNode* root, int targetSum,vector<int>& route,vector<vector <int>>& path_list)
    {
        
        if(root==NULL) return;//forgot return 
        
            route.push_back(root->val);

        
        if(root->left==NULL && root->right==NULL && targetSum == root->val)
        {
            path_list.push_back(route);
        }
        
        find_paths(root->left,targetSum-root->val,route,path_list);
        find_paths(root->right,targetSum-root->val,route,path_list);
        route.pop_back(); 
        
    }
    
    
    
};