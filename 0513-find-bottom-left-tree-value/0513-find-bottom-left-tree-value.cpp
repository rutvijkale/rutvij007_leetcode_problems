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
    void check(int &k,int &j,TreeNode* root,int &ans)
    {
        if(root==nullptr)return;
        j++;
        if(j>k)
        {
            ans=root->val;
            k=j;
        }
        check(k,j,root->left,ans);
        check(k,j,root->right,ans);
        j--;
    }
    int findBottomLeftValue(TreeNode* root) {
        int max_dep=0,curr_dep=0,ans=0;
        check(max_dep,curr_dep,root,ans);
        return ans;
    }
};