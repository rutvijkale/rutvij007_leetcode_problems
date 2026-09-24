class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=10)
            {
                while(nums[i]>=10)
                {
                    nums.insert(nums.begin()+i+1,nums[i]%10);
                    nums[i]/10;
                    nums[i]=nums[i]/10;
                }
            }
        }
        return nums;
    }
};