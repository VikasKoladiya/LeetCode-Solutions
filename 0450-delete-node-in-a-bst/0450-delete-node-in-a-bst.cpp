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
    TreeNode* minvalue(TreeNode* root){
        TreeNode* temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }

        if(root->val == key){
            // 0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            // 1 child
            if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // 2 child
            if(root->left != NULL && root->right != NULL){
                int mini = minvalue(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right,mini);
                return root;
            }
        }

        if(key > root->val){
            root->right = deleteNode(root->right,key);
        }

        if(key < root->val){
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};