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
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL )
        {
            int ans=minDepth(root->right)+1;
            return ans; 
        }
         if(root->right==NULL )
        {
            int ans=minDepth(root->left);
            return ans+1; 
        }
        else
        {

        int letheight= minDepth(root->left);
        int rightheight= minDepth(root->right);
        int ans=min(letheight,rightheight)+1;
          return ans;
        }

        
      

        
    }
};