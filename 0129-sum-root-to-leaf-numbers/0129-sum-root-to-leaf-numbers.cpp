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
    void sum(TreeNode* root,int x,vector<int> &ans)
    {
        if(root==nullptr)
        {
            return;
        }
         x=x*10+root->val;
        if(root->left==nullptr&&root->right==nullptr)
        {
            ans.push_back(x);
            x=x/10;
            return ;
        }
        sum(root->left,x,ans);
        sum(root->right,x,ans);
        x=x/10;
    }
    int sumNumbers(TreeNode* root) {
        vector<int > ans;
        int x=0;
        sum(root,x,ans);
        x=0;
        cout<<ans.size();
        for(int i=0;i<ans.size();i++)
        {
            x+=ans[i];
        }
        return x;
    }
};