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
    void insert(TreeNode* root,int val)
    {
        cout<<"1";
        if(val<root->val)
        {
            if(root->left==nullptr)
            {
                TreeNode* root1=new TreeNode(val);
                root->left=root1;
                return;
            }
            else
            {
                insert(root->left,val);
            }
        }
        if(val>root->val)
        {
            if(root->right==nullptr)
            {
                TreeNode* root1=new TreeNode(val);
                root->right=root1;
                return;
            }
            insert(root->right,val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            TreeNode *root=new TreeNode(val);
            return root;
        }
        insert(root,val);
        return root;
    }
};