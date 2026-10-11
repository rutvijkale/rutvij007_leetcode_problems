class Solution {
public:
    bool judgeSquareSum(int c) {
        int rt=sqrt(c);
        vector<long int> sq(rt+1,0);
        for(int i=1;i<=rt;i++)
        {
            sq[i]=(i)*(i);
        }
        int i=0,j=sq.size()-1;
        while(i<=j)
        {
            if(sq[i]+sq[j]==c){return true;}
            else if(sq[i]+sq[j]<c){i++;}
            else{j--;}
        }
        return false;
    }
};