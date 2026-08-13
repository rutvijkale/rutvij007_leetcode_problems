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
    ListNode* reverseList(ListNode* head) {
        vector<int> nums;
        ListNode *def=new ListNode(0);
        def->next=head;
        ListNode *curr=def->next;
        while(curr!=nullptr)
        {
            nums.push_back(curr->val);
            curr=curr->next;
        }
        int i=nums.size()-1;
        curr=def->next;
        for(i;i>=0;i--)
        {
            curr->val=nums[i];
            curr=curr->next;
        }
        return def->next;
    }
};