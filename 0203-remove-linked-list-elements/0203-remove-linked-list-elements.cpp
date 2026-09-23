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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr1=head,*curr2=dummy;
        if(head==nullptr)return head;
        while(curr1!=nullptr)
        {
            if(curr1->val==val)
            {
                curr2->next=curr1->next;
                curr1=curr1->next;
            }
            else
            {
                curr1=curr1->next;
                curr2=curr2->next;
            }
        }
        return dummy->next;
    }
};