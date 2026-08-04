class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]!=nums[i])
            {
                for(int k=nums[i]+1;k<nums[i+1];k++)
                {
                    arr.push_back(k);
                }
            }
        }
        return arr;
    }
};