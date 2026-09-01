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
    int cheak(TreeNode* root, int &curr_sum,int &a)
    {
        if (a == 0)
            return 0;
        if(root==nullptr)return 0;
        curr_sum-=root->val;
        if (root->left== nullptr&&root->right==nullptr) {
            if (curr_sum == 0)
               { a = 0;}
            curr_sum+=root->val;
            return curr_sum;
        }
        cheak(root->left,curr_sum,a);
        cheak(root->right,curr_sum,a);
        curr_sum=curr_sum+root->val;
        return curr_sum;
    } 
    bool hasPathSum(TreeNode* root, int targetSum) {
        int a=1;
        if(root==nullptr)return false;
        cheak(root,targetSum,a);
        cout<<targetSum;
        if(a==0)return true;
        return false;
    }
};