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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;
        ListNode *def=new ListNode(0);
        def->next=head;
        ListNode *curr=def->next;
        while(curr!=nullptr)
        {
            i++;
            curr=curr->next;
        }
        int a=i-n;
        curr=def;
        i=0;
        while(i<a-1)
        {
            i++;
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return def->next;

    }
};