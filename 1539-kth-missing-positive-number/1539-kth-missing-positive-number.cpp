class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int count=1,i=0;
        for(i=0;i<nums.size();)
        {
            if(count==nums[i]){i++;}
            else{k--;}
            if(k==0){return count;count++;}
            count++;
        }
        return count-1+k;
    }
};