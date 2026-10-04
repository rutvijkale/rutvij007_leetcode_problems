class Solution
{
public:
    int trap(vector<int> &height){
        vector<int>pref(height.size(),height[0]),suff(height.size(),height[height.size()-1]);
        for(int i=1;i<pref.size();i++)
        {
            pref[i]=max(pref[i-1],height[i]);
        }
        int n=pref.size();
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],height[i]);
        }
        int vol=0;
        for(int i=0;i<height.size();i++)
        {
            int a=min(pref[i],suff[i]);
            if(a-height[i]>0)vol+=a-height[i];
        }
        return vol;
    }
};