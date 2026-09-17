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
    void mp(TreeNode *root,vector<int> &arr)
    {
        if(root==nullptr)return;
        arr[root->val+100000]++;
        mp(root->left,arr);
        mp(root->right,arr);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>arr(200001,0);
        mp(root,arr);
        int max=0;
        for(int i=0;i<200001;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        vector<int> ans;
     for(int i=0;i<200001;i++)
        {
            if(arr[i]==max)
            {
                ans.push_back(i-100000);
            }
        }
        return ans;
    }
};