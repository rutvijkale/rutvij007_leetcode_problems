class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0,j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')count++;
            else
            {
                count--;
                if(count==0)
                {
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+j);
                    i=i-2;
                    j=i+1;
                }
            }
        }
            return s;
    }
};