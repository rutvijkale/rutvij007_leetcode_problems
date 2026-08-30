class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min1=INT_MAX,max1=INT_MIN,count_min,count_max,n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min1)
            {
                min1=nums[i];
                count_min=i;
            }
            if(nums[i]>max1)
            {
                max1=nums[i];
                count_max=i;
            }
        }
       int a=min(max(count_min,count_max)+1,n - min(count_min, count_max));
       a=min(a,1+n-count_max+count_min);
       a=min(a,1+n-count_min+count_max);
        return a;
    }
};