class Solution{
public:
    int orangesRotting(vector<vector<int>> &grid) {
       int n=grid[0].size(),m=grid.size();
       queue<pair<pair<int,int>,int>>q;
       int time=0;
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==2)
            {
                q.push({{i,j},0});
            }
        }
       }
       while(!q.empty())
       {
        int i=q.front().first.first;
        int j=q.front().first.second;
        int t=q.front().second;
        if(i-1>=0&&grid[i-1][j]==1){q.push({{i-1,j},t+1});grid[i-1][j]=2;}
        if(i+1<m&&grid[i+1][j]==1){q.push({{i+1,j},t+1});grid[i+1][j]=2;}
        if(j-1>=0&&grid[i][j-1]==1){q.push({{i,j-1},t+1});grid[i][j-1]=2;}
        if(j+1<n&&grid[i][j+1]==1){q.push({{i,j+1},t+1});grid[i][j+1]=2;}
        grid[i][j]=2;
        time=max(time,t);
        q.pop();
       }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            return -1;
        }
    }
    return time;
       
    }
};