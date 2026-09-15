class Solution {
public:
    string check(string &s,int i,int j)
    {
        string st=s.substr(i,j-i+1);
        while((i>=0&&j<s.size())&&s[i]==s[j])
        {
            st=s.substr(i,j-i+1);
            i--,j++;
        }
        return st;
    }
    string longestPalindrome(string s) {
        string st=s.substr(0,1),st1="";
        int i=1;
        while(i<s.size())
        {
            st1=check(s,i,i);
            if(st1.size()>st.size()){st=st1;}
            if(s[i]==s[i-1])
            {
                st1=check(s,i-1,i);
                if(st1.size()>st.size()){st=st1;}
            }
            i++;
        }
        return st;
    }
};