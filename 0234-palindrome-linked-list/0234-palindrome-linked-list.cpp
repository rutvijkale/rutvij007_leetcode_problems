/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode *def=new ListNode(0);
        def->next=head;
        ListNode *curr=def->next;
        while(curr!=nullptr)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        curr=def->next;
        int a=arr.size()/2;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]!=curr->val)
            {
                return false;
            }
            curr=curr->next;
        }
        return true;
    }
};