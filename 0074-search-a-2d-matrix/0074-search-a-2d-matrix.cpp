class Solution {
public:
    bool cheak(vector<int>& nums,int target)
    {
       int low=0,high=nums.size()-1,mid;
       while(low<=high)
       {
        mid=(low+high)/2;
        if(nums[mid]==target){return true;}
        else if(nums[mid]<target){low=mid+1;}
        else{high=mid-1;}
       }
       return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int low=0,high=nums.size()-1,mid,i=0;
        if(target<=nums[0][nums[0].size()-1]){
            i=0;
            return cheak(nums[0],target);
            }
        if(target>=nums[nums.size()-1][0]){i=nums.size()-1; return cheak(nums[nums.size()-1],target);}
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid][0]<=target&&nums[mid][nums[mid].size()-1]>=target){i=mid;break;}
            else if(nums[mid][0]>target){high=mid-1;}
            else{low=mid+1;}
        }
        return cheak(nums[i],target);
    }
};