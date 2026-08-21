class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sum=-1;
      for(int i=0;i<matrix.size();i++)
        {
            sum++;
            for(int j=sum;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};