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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr=head;
        if(head==nullptr||head->next==nullptr){return head;}
        vector<int> hash(202,0);
        while(curr!=nullptr)
        {
            hash[curr->val+100]++;
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]==1){
                curr=curr->next;
                curr->val=i-100;
                
            }
        }
        if(curr!=nullptr){curr->next=nullptr;}
        return head->next;
    }
};