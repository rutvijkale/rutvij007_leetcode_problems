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
    ListNode* swapPairs(ListNode* head) {
        ListNode *def=new ListNode(0);
        def->next=head;
        ListNode *curr1,*curr2,*curr;
        if(def->next!=nullptr&&def->next->next!=nullptr)
        {
            curr1=def;curr2=def->next;
        }
        else
        {
            return def->next;
        }
        curr1->next=curr2->next;
        if(curr2->next!=nullptr){curr1=curr2->next->next;}
        curr=curr2->next;
        curr->next=curr2;
        curr2->next=curr1;
        curr=curr->next;
        if(curr1!=nullptr){curr2=curr1->next;}
        while(curr1!=nullptr&&curr2!=nullptr)
        {
            
            if(curr2->next!=nullptr)
            {
                curr->next=curr2;
                curr=curr1;
                curr1=curr2->next;
                curr2->next=curr;
                curr->next=curr1;
                if(curr1==nullptr||curr1->next==nullptr){break;}
                else{curr2=curr1->next;}
            }
             else
                {
                    //curr=curr->next;
                    curr->next=curr2;
                    curr2->next=curr1;
                    curr1->next=nullptr;
                    break;}
            }
        return def->next;

    }
};