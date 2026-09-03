class Solution {
public:
    bool uniformArray(vector<int>& nums) {
    int flag=0;
    if(nums[0]%2==0)
    {
        for(int i=0;i<nums.size();i++)
        {if(nums[i]%2!=0)
        {
            flag=1;
            break;
        }}
    }
    else flag=1;
    if(flag==0)return true;
    flag=0;
    if(nums[0]%2==1)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
        {
            flag=1;
            break;
        }}
    }
    else{flag=1;}
    if(flag==0)return true;
    sort(nums.begin(),nums.end());
    if(nums[0]%2==1)return true;
    return false;
    }
};