class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> hash;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(k;k>0;k--)
        {
            int key=0,freq=0;
            for(auto it:hash)
            {
                if(it.second>freq)
                {
                    freq=it.second;
                    key=it.first;
                }
            }
            ans.push_back(key);
            hash.erase(key);
        }
        return ans;
    }
};