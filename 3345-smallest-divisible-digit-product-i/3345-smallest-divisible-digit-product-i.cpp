class Solution {
public:
int digit_product(int n)
{
    int t=1;
    while(n>0)
    {
        t=t*(n%10);
        n=n/10;
    }
    return t;
}
    int smallestNumber(int n, int t) {
        int i=1;
        while(i!=0)
        {
            if(digit_product(n)%t==0){return n;}
            else{n++;}
        }
        return 1;
    }
};