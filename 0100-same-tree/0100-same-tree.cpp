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
    void tree1(TreeNode* p,vector<int> &a)
    {
        if(p==nullptr)
        {
            a.push_back(INT_MIN);
            return ;
        }
        a.push_back(p->val);
        tree1(p->left,a);
        tree1(p->right,a);
    }
    void tree2(TreeNode* q,vector<int> &b)
    {
        if(q==nullptr)
        {
            b.push_back(INT_MIN);
            return ;
        }
        b.push_back(q->val);
        tree2(q->left,b);
        tree2(q->right,b);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arr1,arr2;
        tree1(p,arr1);
        tree2(q,arr2);
        if(arr1.size()!=arr2.size())
        {
            return false;
        }
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return false;
            }
        }
        return true;
    }
};