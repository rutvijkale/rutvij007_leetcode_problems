class Solution {
public:
int ab(int n)
{
    if( n<0)return -n;
    else return n;
}
    int threeSumClosest(vector<int>& nums, int target) {
        int i=0,j=0,k=nums.size()-1,ans=INT_MAX,ans1;
        sort(nums.begin(),nums.end());
        for(i;i<nums.size()-2;i++)
        {
            j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(ab((nums[i]+nums[j]+nums[k])-target)<ans)
                {
                    ans=abs((nums[i]+nums[j]+nums[k])-target);
                    ans1=nums[i]+nums[j]+nums[k];
                }
              if(nums[i]+nums[j]+nums[k]>target)k--;  
              else j++;
            }
        }
        return ans1;
    }
};