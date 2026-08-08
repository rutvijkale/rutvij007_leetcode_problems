class Solution {
public:
    int max1(vector<int>& nums)
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=max(nums[i],ans);
        }
        return ans;
    }
    int sum(vector<int>& nums)
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
        }
        return ans;
    }
    int cheack(vector<int>& nums,int mid)
    {
        int days=1,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]+count<=mid){count+=nums[i];}
            else{count=nums[i];days++;}
        }
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low=max1(nums),high=sum(nums),mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(cheack(nums,mid)<=days){high=mid-1;}
            else{low=mid+1;}
        }
        return low;
    }
};