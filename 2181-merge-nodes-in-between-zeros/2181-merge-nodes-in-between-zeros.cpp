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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode *curr=head,*curr1=new ListNode(0),*dummy=curr1;
        while(curr!=nullptr)
        {
            if(curr->val!=0)
            {
                sum+=curr->val;
                curr=curr->next;
            }
            else{
                curr->val=sum;
                sum=0;
                curr1->next=curr;
                curr1=curr1->next;
                curr=curr->next;
            }
        }
        return dummy->next->next;
    }
};