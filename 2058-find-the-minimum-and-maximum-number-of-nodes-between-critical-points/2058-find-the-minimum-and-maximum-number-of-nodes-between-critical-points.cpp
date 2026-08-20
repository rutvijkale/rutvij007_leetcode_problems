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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1),nums;
        if(head->next==nullptr||head->next->next==nullptr)return ans;
        ListNode *curr=head->next,*curr1;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        curr1=dummy->next;
        int i=0;
        while(curr->next!=nullptr)
        {
            i++;
            if(curr1->val<curr->val&&curr->val>curr->next->val)
            {
                nums.push_back(i);
            }
            if(curr1->val>curr->val&&curr->val<curr->next->val)
            {
                nums.push_back(i);
            }
            curr=curr->next;
            curr1=curr1->next;
        }
        if(nums.size()<2)return ans;
        int a=INT_MAX,b=INT_MIN;        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]<a)
            {
                a=nums[i+1]-nums[i];
            }
        }if(a!=INT_MAX)
        {
            ans[0]=a;
        }
        if(nums.size()>1)
        {
            ans[1]=nums[nums.size()-1]-nums[0];
        }
        return ans;
    }
};