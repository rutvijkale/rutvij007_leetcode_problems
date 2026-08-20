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
    int pairSum(ListNode* head) {
        ListNode *curr=head;
        vector<int> nums;
        while(curr!=nullptr)
        {
           nums.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=0;i<nums.size();i++)cout<<nums[i];
       int i=nums.size()/2-1,j=i+1,max=0;
       for(i;i>=0;i--)
       {
        if(nums[i]+nums[j]>max)
        {
            max=nums[i]+nums[j];
        }
        j++;
       }
       return max;
    }
};