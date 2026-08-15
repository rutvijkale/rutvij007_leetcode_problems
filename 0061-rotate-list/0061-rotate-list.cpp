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
    ListNode* rotateRight(ListNode* head, int k) {
        int i=0,a,b;
        ListNode *dummy1=new ListNode(0),*dummy2=new ListNode(0);
        dummy1->next=head;
        ListNode *curr=dummy1->next,*curr1=dummy1->next;
        if(curr==nullptr||curr->next==nullptr){return dummy1->next;}
        while(curr!=nullptr)
        {
            i++;
            curr=curr->next;
        }
        k=k%i;
        if(k==0){return head;}
        a=i-k;
        b=0;
        curr=dummy1->next;
        while(b<a)
        {
            b++;
            if(b==a)
            {
                curr1=curr;
            }
            curr=curr->next;
            
        }
        curr1->next=nullptr;
        dummy2->next=curr;
        curr=dummy2->next;
        curr1=dummy2->next;
        while(b<i-1)
        {
            b++;
            curr1=curr1->next;
        }      
        curr1->next=dummy1->next; 
        return dummy2->next;
    }
};