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
    TreeNode *prev=nullptr; 
    TreeNode *first=nullptr; 
    TreeNode *second=nullptr; 
    TreeNode *mid=nullptr; 
    void find(TreeNode *root)
    {
        if(root==nullptr)return;
        find(root->left);
        if(prev!=nullptr&&(root->val<prev->val))
        {
            if(first==nullptr)
            {
                first=prev;
                mid=root;
            }
            else
            {
                second=root;
                return;
            }
        }
        prev=root;
        find(root->right);
    }
    void recoverTree(TreeNode* root) {
        find(root);
        int x;
        if(second==nullptr)
        {
            x=first->val;
            first->val=mid->val;
            mid->val=x;
        }
        else
        {
           x=first->val;
            first->val=second->val;
            second->val=x; 
        }
    }
};