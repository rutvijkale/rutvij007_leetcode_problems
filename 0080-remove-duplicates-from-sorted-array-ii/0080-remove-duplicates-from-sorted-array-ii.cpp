class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]){flag++;}
            else{flag=0;}
            if(flag>1)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};