class Solution {
public:
    int ab(int a)
    {
        if(a>0)return a;
        else return -a;
    }
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int sum=0,count=-1,min1=INT_MAX;
        for(int i=0;i<drones.size();i++)
        {
            sum=0;
            sum+=ab(drones[i][0]-target[0]);
            sum+=ab(drones[i][1]-target[1]);
            if(sum<=drones[i][2])
            {
                
                if(sum<min1){count=i;}
                min1=min(min1,sum);
                cout<<min1;
            }
        }
        if(min1==INT_MAX)return -1;
        return count;
    }
};