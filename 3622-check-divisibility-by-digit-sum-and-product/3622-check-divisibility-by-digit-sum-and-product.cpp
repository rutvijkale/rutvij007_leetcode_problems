class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n,s=0,p=1;
        while(a>0)
        {
            s+=a%10;
            a=a/10;
        }
        a=n;
        while(a>0)
        {
            p*=a%10;
            a=a/10;
        }
        s+=p;
        if(n%s==0)
        return true;
        return false;

    }
};