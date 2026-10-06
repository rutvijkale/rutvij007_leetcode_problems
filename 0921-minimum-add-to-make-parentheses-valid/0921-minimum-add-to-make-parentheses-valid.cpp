class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0,count1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')count++;
            else if(s[i]==')'&&count!=0)count--;
            else{count1++;}
        }
        return count1+count;
    }
};