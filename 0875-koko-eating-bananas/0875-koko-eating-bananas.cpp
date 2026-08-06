class Solution {
public:
int max1(vector<int>& nums)
{
    int a=0;
    for(int i=0;i<nums.size();i++)
    {
        a=max(a,nums[i]);
    }
    return a;
}
long long int count1(vector<int>& nums,int mid)
{
    long long int count=0;
    for(int i=0;i<nums.size();i++)
    {
        count+=(nums[i]+mid-1)/mid;
    }
    return count;
}
    int minEatingSpeed(vector<int>& nums, int h) {
        int low=1,high=max1(nums),mid,ans;
        long long count;
        while(low<=high)
        {
            mid=(high+low)/2;
            count=count1(nums,mid);
            if(count<=h){ans=mid;}
            if(count<=h){high=mid-1;}
            else{low=mid+1;}
        }
        return ans;
    }
};