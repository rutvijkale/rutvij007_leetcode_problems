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
    void sum(TreeNode* root, int t,int s,vector<int>&arr,vector<vector<int>> &arr1)
    {
        if(root==nullptr)return;
        if(root->left==nullptr&&root->right==nullptr)
        {
            s+=root->val;
            if(s==t)
            {
                arr.push_back(root->val);
                arr1.push_back(arr);
                arr.pop_back();
            }
            s-=root->val;
            return;
        }
        arr.push_back(root->val);
        s+=root->val;
        sum(root->left,t,s,arr,arr1);
        sum(root->right,t,s,arr,arr1);
        arr.pop_back();
        s-=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int> arr;
        vector<vector<int>> arr1;
        int s=0;
        sum(root,t,s,arr,arr1);
        return arr1;
    }
};