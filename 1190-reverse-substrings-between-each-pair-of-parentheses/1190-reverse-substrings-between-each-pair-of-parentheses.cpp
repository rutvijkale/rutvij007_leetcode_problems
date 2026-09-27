class Solution {
public:
    int swap1(string &s,int i)
    {
        int j=i+1;
        for(j;j<s.size();j++)
        {
            if(s[j]=='(')j=swap1(s,j);
            if(s[j]==')')break;
        }
        reverse(s.begin()+i+1,s.begin()+j);
        s.erase(s.begin()+j);
        s.erase(s.begin()+i);
        return j-2;
    }
    string reverseParentheses(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')i=swap1(s,i);
        }
        return s;
    }
};