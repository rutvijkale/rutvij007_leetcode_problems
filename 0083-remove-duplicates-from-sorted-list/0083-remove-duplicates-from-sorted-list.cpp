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
    ListNode* deleteDuplicates(ListNode* head) {
        int val1;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        if(dummy->next==nullptr||dummy->next->next==nullptr){return dummy->next;}
        ListNode *curr1=dummy->next,*curr2=dummy->next,*curr3;
        val1=curr1->val;
        while(curr1!=nullptr)
        {
            if(val1!=curr1->val)
            {
                curr2->next=curr1;
                curr2=curr1;
                val1=curr2->val;
            }
            if(curr1->next==nullptr){curr3=curr1;}
            curr1=curr1->next;
        }
        if(curr2->val==curr3->val)
        {
            curr2->next=nullptr;
        }
        return dummy->next;
    }
};