class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid,min=INT_MAX,index;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<min)
                {
                    min=nums[low];
                    index=low;
                }
                low=mid+1;
            }
            else
            {
                if(nums[mid]<min)
                {
                    min=nums[mid];
                    index=mid;
                }
                high=mid-1;
            }
        }
        return min;
    }
};