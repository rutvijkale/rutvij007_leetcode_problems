class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
        for(int i=0;i<s.size();i++)
        {
            if((int)s[i]>(int)target)return s[i];
        }
        return s[0];
    }
};