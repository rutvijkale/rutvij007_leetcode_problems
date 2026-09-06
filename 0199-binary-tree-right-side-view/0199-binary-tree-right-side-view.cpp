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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        stack <int > st;
        queue<TreeNode*> q;
        if(root==nullptr)return ans;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                root=q.front();
                if(root->left!=nullptr)q.push(root->left);
                if(root->right!=nullptr)q.push(root->right);
                st.push(q.front()->val);
                q.pop();
            }
            ans.push_back(st.top());
        }
        return ans;
    }
};