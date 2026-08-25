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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>>arr1;
        if(root==nullptr)return arr1;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> arr;
            for(int i=0;i<size;i++)
            {
                root=q.front();
                if(root->left!=nullptr){q.push(root->left);}
                if(root->right!=nullptr){q.push(root->right);}
                arr.push_back(root->val);
                q.pop();
            }
            arr1.push_back(arr);
        }
        return arr1;
    }
};