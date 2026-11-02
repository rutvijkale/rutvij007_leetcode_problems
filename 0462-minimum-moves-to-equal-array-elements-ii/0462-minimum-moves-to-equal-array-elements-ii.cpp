class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)return 0;
        int med_1=nums[n/2],med_2=nums[n/2-1];
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++)
        {
            ans1+=abs(nums[i]-med_1);
            ans2+=abs(nums[i]-med_2);
        }
        return min(ans1,ans2);
    }
};