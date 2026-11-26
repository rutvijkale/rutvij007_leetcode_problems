class Solution {
public:
    bool canAliceWin(int n) {
        bool check=true;
        int i=10;
        while(n>=0)
        {
            check=!check;
            n=n-i;
            i--;
        }
        return check;
    }
};