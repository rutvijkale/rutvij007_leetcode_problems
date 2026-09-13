class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int sum=0,i=0,j=c.size()-1;
        for(i;i<k;i++)
        {
            sum+=c[i];
        }
        if(k==c.size())return sum;
        int sum1=sum;
        i--;
        while(i>=0)
        {
            sum=sum-c[i]+c[j];
            i--,j--;
            sum1=max(sum1,sum);
        }
        return sum1;
    }
};