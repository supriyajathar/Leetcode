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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;

        }
        // int lefthieght=maxDepth(root->left);
        // int righthight=maxDepth(root->right);
        // int hieght=max( lefthieght, righthight)+1;
        // return hieght;
        int lefthight=maxDepth(root->left);
        int righthight=maxDepth(root->right);
        int ans=max(lefthight,righthight)+1;
        return ans;
        
    }
};