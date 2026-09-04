class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector <int> min1,max1;
        max1.push_back(nums[0]),min1.push_back(nums[nums.size()-1]);
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
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<min1[0])
            {
                min1.insert(min1.begin(),nums[i]);
            }
            else
            {
                min1.insert(min1.begin(),min1[0]);
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