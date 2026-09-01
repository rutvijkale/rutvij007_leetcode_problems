class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=nums[0],min1=nums[0],result=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int x=nums[i];
            int curr_max1=max({x,max1*x,min1*x});
            int curr_min1=min({x,max1*x,min1*x});
            max1=curr_max1;
            min1=curr_min1;
            result=max(result,max1);
        }
        return result;
    }
};