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
    void postorder(TreeNode *i,vector<int> &a)
    {
        if(i==nullptr)return;
        postorder(i->left,a);
        postorder(i->right,a);
        a.push_back(i->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> a;
        postorder(root,a);
        return a;
    }
};