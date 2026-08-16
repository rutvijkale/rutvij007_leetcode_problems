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
    void reorderList(ListNode* head) {
        vector<int >nums;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy->next;
        while(curr!=nullptr)
        {
            nums.push_back(curr->val);
            curr=curr->next;
        }
        int i=0,j=nums.size()-1,flag=0;
        curr=dummy->next;
        while(i<=j)
        {
            if(flag==0)
            {
                flag=1;
                curr->val=nums[i];
                i++;
            }
            else
            {
                flag=0;
                curr->val=nums[j];
                j--;
            }
            curr=curr->next;
        }

    }
};