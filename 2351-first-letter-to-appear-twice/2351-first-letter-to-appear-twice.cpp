class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int > a(123,0);
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]]==1)return s[i];
            else
            a[s[i]]++;
        }
        return' c';
    }
};