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
    ListNode* removeNodes(ListNode* head) {
        ListNode *curr=head,*curr1;
        vector<int> nums;
        while(curr!=nullptr)
        {
            nums.push_back(curr->val);
            curr=curr->next;
        }
        int max=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<max)
            {
                nums.erase(nums.begin()+i);
            }
            else
            {
                max=nums[i];
            }
        }
        curr=head;
        for(int i=0;i<nums.size();i++)
        {
            curr1=curr;
            curr->val=nums[i];
            curr=curr->next;
        }
        if(curr!=nullptr)
        {curr1->next=nullptr;}
        return head;

    }
};