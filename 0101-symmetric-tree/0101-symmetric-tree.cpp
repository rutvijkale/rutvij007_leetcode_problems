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
    bool sy(TreeNode *p,TreeNode *q)
    {
        if(q==nullptr&&p==nullptr)return true;
        if(q==nullptr||p==nullptr)return false;
        if(p->val!=q->val)return false;
        return sy(p->left,q->right)&&sy(q->left,p->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root->right==nullptr&&root->left==nullptr)return true;
        if(root->right==nullptr||root->left==nullptr)return false;
        return sy(root->left,root->right)&&sy(root->left,root->right);
    }
};