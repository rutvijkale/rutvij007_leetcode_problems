class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> solveNQueens(int n) {
       string a(n,'.');
       vector<string>nums;
       for(int i=0;i<n;i++)
       {
        nums.push_back(a);
       }
       solve(nums,0);
       return ans;
    }
    void solve(vector<string> nums,int col)
    {
        if(nums.size()==col){ans.push_back(nums);return;}
        for(int row=0;row<nums.size();row++)
        {
            if(isvalid(row,col,nums))
            {
                nums[row][col]='Q';
                solve(nums,col+1);
                nums[row][col]='.';
            }
        }
    }
    bool isvalid(int row,int col,vector<string>nums)
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i][col]=='Q')return false;
            if(nums[row][i]=='Q')return false;
        }
        int i=row,j=col;
        while(i>=0&&j>=0)
        {
            if(nums[i][j]=='Q')return false;
            i--,j--;
        }
        i=row,j=col;
        while(i<n&&j<n)
        {
            if(nums[i][j]=='Q')return false;
            i++,j++;
        }
        i=row,j=col;
        while(i>=0&&j<n)
        {
            if(nums[i][j]=='Q')return false;
            i--,j++;
        }
        i=row,j=col;
        while(i<n&&j>=0)
        {
            if(nums[i][j]=='Q')return false;
            i++,j--;
        }
        return true;
    }
};