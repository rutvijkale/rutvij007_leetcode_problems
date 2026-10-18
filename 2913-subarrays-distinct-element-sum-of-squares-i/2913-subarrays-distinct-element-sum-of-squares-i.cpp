class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int count=0;
        for(int i=1;i<=nums.size();i++)
        {
            map<int,int>ans;
            int j=0,k=0;
            for(j=0;j<i;j++)
            {
                ans[nums[j]]++;
            }
            count+=ans.size()*ans.size();
            j = 1;
k = i;

for (; k < nums.size(); j++, k++) {
    int outgoing = nums[j - 1];
    ans[outgoing]--;
    if (ans[outgoing] == 0) {
        ans.erase(outgoing);
    }
    ans[nums[k]]++;
    count += ans.size() * ans.size();
}
        }
        return count;
    }
};