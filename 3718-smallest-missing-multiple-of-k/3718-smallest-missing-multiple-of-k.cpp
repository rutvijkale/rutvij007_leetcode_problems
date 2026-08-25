class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int flag=0,c=1,a=k,i=0;
        while(flag!=1&&i<nums.size())
        {
            if(a>nums[i]){i++;}
            else if(a==nums[i])
            {
                i++,c++;
                a=k*c;
            }
            else
            {
                flag=1;
            }
        }
        return a;
    }
};