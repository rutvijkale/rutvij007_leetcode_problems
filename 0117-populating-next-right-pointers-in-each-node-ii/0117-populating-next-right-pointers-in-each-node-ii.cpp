/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue <Node*> st;
        Node* r=root;
        if(root==nullptr)return nullptr;
        st.push(root);
        while(!st.empty())
        {
            int s=st.size();
            for(int i=0;i<s;i++)
            {
                root=st.front();
                st.pop();
                if(root->left!=nullptr)
                {st.push(root->left);}
                if(root->right!=nullptr)
                {st.push(root->right);}
                if(i==s-1)break;
                root->next=st.front();
            }

        }
        return r;
    }
};