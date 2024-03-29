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
    string str="";
   string preorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return "";
        }
       
       string str = to_string(root->val);
       
      if(root->left) 
       {
           str+="("+preorder(root->left)+")";
       }
       else if(root->right)
       {
           str+="()";
       }
        
      if(root->right)
      {
          str+="("+preorder(root->right)+")";
      }
       

     return str;   
    }
   
    string tree2str(TreeNode* root) {
       string ans = preorder(root);
        return ans;
        
    }
};