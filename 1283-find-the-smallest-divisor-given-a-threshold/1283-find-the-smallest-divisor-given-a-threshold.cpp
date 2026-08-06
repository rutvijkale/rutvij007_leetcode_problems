class Solution {
public:
int max1(vector<int>& nums)
{
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        count=max(count,nums[i]);
    }
    return count;
}
long long int count(vector<int>& nums, int mid,int t)
{
    long long count1=0;
    for(int i=0;i<nums.size();i++)
    {
        count1+=nums[i]/mid;
        if(nums[i]%mid!=0){count1++;}
        if(count1>t)break;
    }
    return count1;
}
    int smallestDivisor(vector<int>& nums, int t) {
        int low=1,high=max1(nums),mid,ans;
        long long int count1=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            count1=count(nums,mid,t);
            if(count1<=t){ans=mid;}
            if(count1>t){low=mid+1;}
            else{high=mid-1;}
        }
        return ans;
    }
};