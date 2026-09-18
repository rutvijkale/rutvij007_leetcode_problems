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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> arr;
        queue<TreeNode*> q;
        if(root==nullptr)return arr;
        q.push(root);
        while(!q.empty())
        {
            double sum=0,n=q.size();
            for(int i=0;i<n;i++)
            {
                root=q.front();
                q.pop();
                sum+=root->val;
                if(root->left!=nullptr)
                {
                    q.push(root->left);
                }
                if(root->right!=nullptr)
                {
                    q.push(root->right);
                }
            }
            arr.push_back(sum/n);
        }
        return arr;
    }
};