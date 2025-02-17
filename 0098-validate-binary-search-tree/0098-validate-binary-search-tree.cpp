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
    bool checkValidBST(TreeNode* root,long minval,long maxval){
        if(root==NULL){
            return true;
        }

        if(root->val >= maxval || root->val<=minval) {
            return false;
        }

        return checkValidBST(root->left,minval,root->val) && checkValidBST(root->right,root->val,maxval);
    }
    bool isValidBST(TreeNode* root) {
        return checkValidBST(root,LONG_MIN,LONG_MAX);
    }
};