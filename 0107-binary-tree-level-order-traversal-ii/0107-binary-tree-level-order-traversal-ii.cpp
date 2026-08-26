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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> arr1;
        queue<TreeNode*> q;
        if(root==nullptr)return arr1;
        vector<int> arr;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            arr.clear();
            for(int i=0;i<size;i++)
            {
                root=q.front();
                q.pop();
                if(root->left!=nullptr)q.push(root->left);
                if(root->right!=nullptr)q.push(root->right);
                arr.push_back(root->val);
            }
            arr1.push_back(arr);
        }
        reverse(arr1.begin(),arr1.end());
        return arr1;
    }
};