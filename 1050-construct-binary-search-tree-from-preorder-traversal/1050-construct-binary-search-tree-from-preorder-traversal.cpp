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

    void mappingindex(vector<int> in,map<int,int> &m,int n){
        for(int i=0;i<n;i++){
            m[in[i]] = i;
        }
    }

    TreeNode* solve(vector<int> pre,vector<int> in,int &index,int inorderindex,int inorderend,int n,map<int,int> m){
        if(index>=n || inorderindex > inorderend){
            return NULL;
        }

        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        int position = m[element];

        root->left = solve(pre,in,index,inorderindex,position-1,n,m);
        root->right = solve(pre,in,index,position+1,inorderend,n,m);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder = preorder;
        sort(inorder.begin(),inorder.end());
        map<int,int> mapping;
        int idx = 0,n=preorder.size();
        mappingindex(inorder,mapping,n);
        TreeNode* ans = solve(preorder,inorder,idx,0,n-1,n,mapping);
        return ans;
    }
};