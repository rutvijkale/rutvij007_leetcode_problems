class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int sum=0,sum1=0;
        for(int i=1;i<n;i++)
        {
            sum+=i;
        }
        for(int i=n-1;i>=1;i--)
        {
            sum1+=i+1;
            sum=sum-i;
            if(sum==sum1)return i;
        }
        return -1;
    }
};