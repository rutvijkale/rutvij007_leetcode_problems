class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string> nums={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.size()==1)
        {
           for (int i = 0; i < nums[digits[0] - '0'].size(); i++) {
                string ans_st = "";
                ans_st.push_back(nums[digits[0] - '0'][i]);
                ans.push_back(ans_st);
            }
            return ans;
        }
        else if(digits.size()==2)
        {
            for (int i = 0; i < nums[digits[0] - '0'].size(); i++) {
            for(int j=0;j<nums[digits[1]-'0'].size();j++)
            {
                string ans_st = "";
                ans_st.push_back(nums[digits[0] - '0'][i]);
                ans_st.push_back(nums[digits[1] - '0'][j]);
                ans.push_back(ans_st);
            }
            }
            return ans;
        }
        else if(digits.size()==3)
        {
            for (int i = 0; i < nums[digits[0] - '0'].size(); i++) {
            for(int j=0;j<nums[digits[1]-'0'].size();j++)
            {
            for(int k=0;k<nums[digits[2]-'0'].size();k++)
            {
                string ans_st = "";
                ans_st.push_back(nums[digits[0] - '0'][i]);
                ans_st.push_back(nums[digits[1] - '0'][j]);
                ans_st.push_back(nums[digits[2] - '0'][k]);
                ans.push_back(ans_st);
            }
            }
            }
            return ans;
        }
        else
        {
            for (int i = 0; i < nums[digits[0] - '0'].size(); i++) {
            for(int j=0;j<nums[digits[1]-'0'].size();j++)
            {
            for(int k=0;k<nums[digits[2]-'0'].size();k++)
            {
            for(int l=0;l<nums[digits[3]-'0'].size();l++)
            {
                string ans_st = "";
                ans_st.push_back(nums[digits[0] - '0'][i]);
                ans_st.push_back(nums[digits[1] - '0'][j]);
                ans_st.push_back(nums[digits[2] - '0'][k]);
                ans_st.push_back(nums[digits[3] - '0'][l]);
                ans.push_back(ans_st);
            }
            }
            }
            }
            return ans;
        }
        return ans;
    }
};