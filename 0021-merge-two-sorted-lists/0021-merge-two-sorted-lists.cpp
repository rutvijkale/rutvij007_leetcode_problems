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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *def1=new ListNode(0),*def2=new ListNode(0),*def=new ListNode(0);
        def1->next=list1,def2->next=list2;
        ListNode *curr=def,*curr1=def1->next,*curr2=def2->next;
        while(curr1!=nullptr||curr2!=nullptr)
        {
            if(curr1!=nullptr&&curr2!=nullptr)
            {
                if(curr1->val<curr2->val)
                {
                    curr->next=new ListNode(curr1->val);
                    curr1=curr1->next;
                    curr=curr->next;
                }
                else
                {
                    curr->next=new ListNode(curr2->val);
                    curr2=curr2->next;
                    curr=curr->next;
                }
            }
            else if(curr1==nullptr)
            {
                curr->next=new ListNode(curr2->val);
                curr2=curr2->next;
                curr=curr->next;
            }
            else
            {
                    curr->next=new ListNode(curr1->val);
                    curr1=curr1->next;
                    curr=curr->next;
            }
        }
        return def->next;
    }
};