/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr||headB==nullptr)return nullptr;
        ListNode *curr1=headA,*curr2=headB;
        vector<ListNode*> arr1,arr2;
        while(curr1!=nullptr)
        {
            arr1.push_back(curr1);
            curr1=curr1->next;
        }
        while(curr2!=nullptr)
        {
            arr2.push_back(curr2);
            curr2=curr2->next;
        }
       int i=arr1.size()-1,j=arr2.size()-1;
        if(arr1[i]!=arr2[j]){return nullptr;}
       while(i>=0&&j>=0)
        {
            if(arr1[i]!=arr2[j])
            {
                return arr1[i+1];
            }
            i--,j--;
        }
        return arr1[i+1];
    }
};