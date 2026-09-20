class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans+=(i+1)*abs((int)s[i]-'z'-1);
        }
        return ans;
    }
};