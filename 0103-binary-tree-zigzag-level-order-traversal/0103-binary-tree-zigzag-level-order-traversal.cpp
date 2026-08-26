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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        int flag=0;
        if(root==nullptr)return arr;
        queue<TreeNode*> q;
        vector<int> arr1;
        q.push(root);
        while(!q.empty())
        {
           int size=q.size();
           arr1.clear();
           for(int i=0;i<size;i++)
           {
            root=q.front();
            arr1.push_back(root->val);
            q.pop();
            if(root->left!=nullptr)q.push(root->left);
            if(root->right!=nullptr)q.push(root->right);
           }
           if(flag==0){flag=1;}
           else
           {
            flag=0;
            reverse(arr1.begin(),arr1.end());
           }
           arr.push_back(arr1);
        }
        return arr;
    }
};