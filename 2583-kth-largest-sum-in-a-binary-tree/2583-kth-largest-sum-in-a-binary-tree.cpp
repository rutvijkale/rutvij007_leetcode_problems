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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long int> arr;
        queue<TreeNode*> q;
        long long int a=0;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            a=0;
            for(int i=0;i<size;i++)
            {
                root=q.front();
                q.pop();
                a+=root->val;
                if(root->left!=nullptr)
                {
                    q.push(root->left);
                }
                if(root->right!=nullptr)
                {
                    q.push(root->right);
                }
            }
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        int b=arr.size()-k;
        if(b<0)return -1;
        return arr[arr.size()-k];
    }
};