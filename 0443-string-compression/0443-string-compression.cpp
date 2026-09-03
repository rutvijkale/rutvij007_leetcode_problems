class Solution {
public:
    void d(vector<char>& chars, int& i)
    {
        char c = chars[i];
        int a = 1;
        int j = i + 1;
        while (j < chars.size() && chars[j] == c)
        {
            chars.erase(chars.begin() + j);
            a++;
        }
        if (a > 1)
        {
            string s = to_string(a);
            for (char x : s)
            {
                chars.insert(chars.begin() + i + 1, x);
                i++;
            }
        }
        i++;
    }
    int compress(vector<char>& chars)
    {
        int i = 0;
        while (i < chars.size())
        {
            d(chars, i);
        }
        return chars.size();
    }
};