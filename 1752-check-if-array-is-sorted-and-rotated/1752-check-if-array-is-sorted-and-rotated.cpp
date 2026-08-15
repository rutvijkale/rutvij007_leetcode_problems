class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0,j=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                j=i;
                break;
            }
        }
        if(j==-1)return true;
        reverse(nums.begin(),nums.begin()+j+1);
        reverse(nums.begin()+j+1,nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
};