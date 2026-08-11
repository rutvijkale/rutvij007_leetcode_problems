class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,ml=nums.size()+1,sum=0;
        while(i<nums.size())
        {
            sum+=nums[i];
            i++;
            while(sum>=target)
            {
                ml=min(ml,i-j);
                sum-=nums[j];
                j++;
                
            }
        }
        if(ml>nums.size())return 0;
        return ml;
    }
};