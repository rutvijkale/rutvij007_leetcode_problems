/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int rt(TreeNode* root,TreeNode* p,vector<TreeNode*> &arr)
    {
        if(root==nullptr)return 0;
        if(root==p)
        {
            arr.push_back(root);
            return 1;}
        int a=rt(root->left,p,arr);
        int b=rt(root->right,p,arr);
        if(a==1||b==1)
        {
            arr.push_back(root);
            return 1;
        }
        return 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> arr1,arr2;
        rt(root,p,arr1);
        rt(root,q,arr2);
        reverse(arr1.begin(),arr1.end());
        reverse(arr2.begin(),arr2.end());
        int n=min(arr1.size(),arr2.size());
        for(int i=1;i<n;i++)
        {
            if(arr1[i]!=arr2[i])
            return arr1[i-1];
        }
        if(arr1.size()<arr2.size()){return arr1[arr1.size()-1];}
        else{return arr2[arr2.size()-1];}
    }
};