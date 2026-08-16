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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int >nums(right-left+1,0);
        int i=1,j=0;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy->next;
        while(curr!=nullptr)
        {
            if(i>=left&&i<=right)
            {
                nums[j]=curr->val;
                j++;
            }
            i++;
            curr=curr->next;
        }
        curr=dummy->next;
        j=nums.size()-1;
        i=0;
        while(curr!=nullptr)
        {
            if(i>=left-1&&i<right)
            {
                curr->val=nums[j];
                cout<<nums[j];
                j--;
            }
            i++;
            curr=curr->next;
        }        
        return head;
    }
};