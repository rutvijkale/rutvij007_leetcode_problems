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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> arr1,arr2,arr;
        ListNode *curr1=l1,*curr2=l2;
        while(curr1!=nullptr)
        {
            arr1.push_back(curr1->val);
            curr1=curr1->next;
        }
        while(curr2!=nullptr)
        {
            arr2.push_back(curr2->val);
            curr2=curr2->next;
        }
        int i=arr1.size()-1,j=arr2.size()-1,carry=0;
        while(i>=0||j>=0||carry!=0)
        {
            if(i>=0&&j>=0)
            {
                arr.insert(arr.begin(),carry+arr1[i]+arr2[j]);
                carry=arr[0]/10;
                arr[0]=arr[0]%10;
                i--;j--;
            }
            else if(i<0&&j>=0)
            {
                arr.insert(arr.begin(),carry+arr2[j]);
                carry=arr[0]/10;
                arr[0]=arr[0]%10;
                j--;
            }
            else if(j<0&&i>=0)
            {
                arr.insert(arr.begin(),carry+arr1[i]);
                carry=arr[0]/10;
                arr[0]=arr[0]%10;
                i--;
            }
            else if(carry!=0)
            {
                arr.insert(arr.begin(),1);
                carry=0;
            }
        }
        ListNode *dumy=new ListNode(0);
        curr1=dumy;
        for(int i=0;i<arr.size();i++)
        {
            curr1->next=new ListNode(arr[i]);
            curr1=curr1->next;
        }
        return dumy->next;;
    }
};