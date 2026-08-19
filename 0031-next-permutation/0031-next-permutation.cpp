class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2,j=i+1;
        for(i;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){break;}
        }
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(j;j>=0;j--)
        {
            if(nums[i]<nums[j]){break;}
        }
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
    }
};