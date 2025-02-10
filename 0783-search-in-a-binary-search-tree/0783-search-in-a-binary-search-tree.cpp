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

    TreeNode* rooted = NULL;
    TreeNode* subtree(TreeNode* root,int d){
        if(root==NULL){
            return NULL;
        }

        if(d == root->val){
            rooted = root;
        }
        if(d>root->val){
            root->right = subtree(root->right,d);
        }
        else{
            root->left = subtree(root->left,d);
        }
        return root;
    }

    TreeNode* searchBST(TreeNode* root, int val) {

        subtree(root,val);

        return rooted;
    }
};