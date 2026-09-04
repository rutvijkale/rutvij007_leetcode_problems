class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector <int> min1(nums.size(),0),max1;
        max1.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max1[i-1])
            {
                max1.push_back(nums[i]);
            }
            else
            {
                max1.push_back(max1[i-1]);
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==nums.size()-1||nums[i]<min1[i+1])
            {
                min1[i]=nums[i];
            }
            else
            {
                min1[i]=min1[i+1];
            }
        }
        int m=max1[0]-min1[0],ind=0;
        for(int i=1;i<max1.size();i++)
        {
            if(max1[i]-min1[i]<m)
            {
                if(m<=k)break;
                m=max1[i]-min1[i];
                ind=i;  
                  
            }
        }
        if(m<=k)return ind;
        return -1;
    }
};