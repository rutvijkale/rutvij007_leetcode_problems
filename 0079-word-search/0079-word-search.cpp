class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> grid(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    grid[i][j]=1;
                    if(bfs(i,j,1,board,word,grid))return true;
                    grid[i][j]=0;
                }
            }
        }
        return false;
    }
    bool bfs(int i,int j,int q,vector<vector<char>>& board, string s,vector<vector<int>>& grid)
    {
        if(q==s.size())return true;
        int m=board.size(),n=board[0].size();
        if(i-1>=0&&board[i-1][j]==s[q]&&grid[i-1][j]==0)
        {
            grid[i-1][j]=1;
            if(bfs(i-1,j,q+1,board,s,grid))return true;
            grid[i-1][j]=0;
        }
        if(i+1<m&&board[i+1][j]==s[q]&&grid[i+1][j]==0)
        {
            grid[i+1][j]=1;
            if(bfs(i+1,j,q+1,board,s,grid))return true;
            grid[i+1][j]=0;
        }
        if(j-1>=0&&board[i][j-1]==s[q]&&grid[i][j-1]==0)
        {
            grid[i][j-1]=1;
            if(bfs(i,j-1,q+1,board,s,grid))return true;
            grid[i][j-1]=0;
        }
        if(j+1<n&&board[i][j+1]==s[q]&&grid[i][j+1]==0)
        {
            grid[i][j+1]=1;
            if(bfs(i,j+1,q+1,board,s,grid))return true;
            grid[i][j+1]=0;
        }
        return false; 
    }
};