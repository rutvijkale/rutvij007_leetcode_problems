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
    int gcd(int a,int b)
    {
        int g=min(a,b);
        while(g>0)
        {
            if(a%g==0&&b%g==0)return g;
            g--;
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy->next;
        if(curr->next==nullptr)return head;
        while(curr->next!=nullptr)
        {
            int i=gcd(curr->val,curr->next->val);
            ListNode *curr1=new ListNode(i);
            curr1->next=curr->next;
            curr->next=curr1;
            curr=curr1->next;
        }
        return head;
    }
};