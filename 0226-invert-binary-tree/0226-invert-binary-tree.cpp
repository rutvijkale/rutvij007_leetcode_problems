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
    void traverse(TreeNode* root)
    {
        if(root->left==nullptr&&root->right==nullptr)return;
        if(root->left!=nullptr){traverse(root->left);}
        if(root->right!=nullptr){traverse(root->right);}
        TreeNode *t=root->left;
        root->left=root->right;
        root->right=t;
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root!=nullptr){traverse(root);}
        return root;
    }
};