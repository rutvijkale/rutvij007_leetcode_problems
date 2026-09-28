class Solution {
public:
    int maxDepth(string s) {
        int max=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')count++;
            if(s[i]==')')count--;
            if(count>max)max=count;
        }
        return max;
    }
};