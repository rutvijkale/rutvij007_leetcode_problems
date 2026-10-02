class Solution {
public:
    int hIndex(vector<int>& c) {
        int low=0,n=c.size(),high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(c[mid]==n-mid)return c[mid];
            else if(c[mid]<n-mid)low=mid+1;
            else high=mid-1;
        }
        return n-low;
    }
};