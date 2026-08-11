class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int a=nums[0],count=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i]+1)
            {
                count+=nums[i+1];
            }
            else
            {
                break;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>count)return count;
            else if(nums[i]==count){count++;}
        }
        return count;
    }
};