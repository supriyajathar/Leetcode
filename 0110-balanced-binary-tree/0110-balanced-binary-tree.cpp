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


int height( TreeNode *root)
{
//     if(root==NULL)
//     {
//         return 0;
//     }
    
//     int lefthieght=height(root->left);
//     int righthight=height(root->right);
//     int final=max(lefthieght,righthight)+1;
//     return final;
if(root==NULL)
{
    return 0;
}
int leftheight=height(root->left);

int rightheight=height(root->right);
int total=max(leftheight,rightheight)+1;
return total;


}
    bool isBalanced(TreeNode* root) {
//         if(root==NULL)
//         {
//             return true;
//         }
//         int leftheight=height(root->left);
//            int righthieght=height(root->right);
//            int diff=abs(leftheight-righthieght);
//            bool currnode=(diff<=1);
//            bool leftans=isBalanced(root->left);
//            bool rightans=isBalanced(root->right);
//            if(currnode && leftans&&rightans)
//            {
//                return true;
//            }
//            else
//            {
//                return false;
//            }
if(root==NULL)
{
    return true;
}
int leftheight=height(root->left);
int rightheight=height(root->right);
int diff=abs(leftheight-rightheight);
bool currentnode=(diff<=1);
bool leftbalanced=isBalanced(root->left);
bool rightbalanced=isBalanced(root->right);
if(currentnode &&  leftbalanced && rightbalanced)
{
    return true;
}
else
{
    return  false;
}






  
        
    }
};