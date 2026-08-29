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
    void pre(TreeNode* root,vector<int> &arr)
    {
        if(root==nullptr)return;
        arr.push_back(root->val);
        pre(root->left,arr);
        pre(root->right,arr);
        return ;
    }
    void flatten(TreeNode* root) {
        vector<int> arr;
        pre(root,arr);
        if(root==nullptr)return;
        TreeNode *head=root;
        for(int i=1;i<arr.size();i++)
        {
            root->left=nullptr;
            root->right=new TreeNode(arr[i]);
            root=root->right;
        }
    }
};