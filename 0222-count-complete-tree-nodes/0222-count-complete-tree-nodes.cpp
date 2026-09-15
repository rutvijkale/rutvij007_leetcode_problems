class Solution {
public:
    void countl(TreeNode* root, int &k)
    {
        if(root == nullptr) return;
        k++;
        countl(root->left, k);
    }
    void countr(TreeNode* root, int &k)
    {
        if(root == nullptr) return;
        k++;
        countr(root->right, k);
    }
    int countNodes(TreeNode* root)
    {
        if(root == nullptr)
            return 0;
        int k = 0, j = 0;
        countl(root, k);
        countr(root, j);
        int a = (1<<k) - 1;
        if(k == j)
            return a;
        return 1 + countNodes(root->left)
                 + countNodes(root->right);
    }
};