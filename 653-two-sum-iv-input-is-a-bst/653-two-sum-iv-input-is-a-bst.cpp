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
    vector<int> res;
    void inorder(TreeNode* root)
    {
        if(root!=NULL)
        {
        res.push_back(root->val);
        inorder(root->left);
        inorder(root->right);
        }
    }
    
    
    
    bool findTarget(TreeNode* root, int k) {
        
      inorder(root);
       sort(res.begin(),res.end());
        int l = res.size(),left=0,right=l-1;
        while(left<right)
        {
            int ans = res[left]+res[right];
            if(ans>k) --right;
            else if(ans<k) ++left;
            else
                return true;
        }

        return false;
    }
};