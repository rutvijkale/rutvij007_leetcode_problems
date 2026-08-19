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
    ListNode* doubleIt(ListNode* head) {
        ListNode *dummy=new ListNode(1);
        dummy->next=head;
        ListNode *curr=head;
        vector<int>arr;
        while(curr!=nullptr)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int carry=0;
        for(int i=arr.size()-1;i>=0;i--)
        {
            arr[i]=arr[i]*2+carry;
            carry=arr[i]/10;
            arr[i]=arr[i]%10;
        }
        curr=head;
        for(int i=0;i<arr.size();i++)
        {
           curr->val=arr[i];
           curr=curr->next; 
        }
        if(carry!=0)return dummy;
        return head;
    }
};