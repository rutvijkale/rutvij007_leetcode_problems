class Solution {
public:
    int no_day(int D,int M)
    {
        vector<int> month={31,28,31,30,31,30,31,31,30,31,30,31};
        int temp=0;
        for(int i=0;i<M-1;i++)
        {
            temp+=month[i];
        }
        temp+=D;
        return temp;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aa_m=0,ab_m=0,la_m=0,lb_m=0,aa_d=0,ab_d=0,la_d=0,lb_d=0,ans=0;
        for(int i=0;i<2;i++)
        {
            aa_m=aa_m*10+(arriveAlice[i]-'0');
            ab_m=ab_m*10+(arriveBob[i]-'0');
            la_m=la_m*10+(leaveAlice[i]-'0');
            lb_m=lb_m*10+(leaveBob[i]-'0');
        }
        for(int i=3;i<5;i++)
        {
            aa_d=aa_d*10+(arriveAlice[i]-'0');
            ab_d=ab_d*10+(arriveBob[i]-'0');
            la_d=la_d*10+(leaveAlice[i]-'0');
            lb_d=lb_d*10+(leaveBob[i]-'0');
        }
        aa_d=no_day(aa_d,aa_m);
        ab_d=no_day(ab_d,ab_m);
        la_d=no_day(la_d,la_m);
        lb_d=no_day(lb_d,lb_m);
        if(lb_d<aa_d||la_d<ab_d)return 0;
        else
        {
            if(aa_d<ab_d)
            {
                return min(la_d,lb_d)+1-ab_d;
            }
            else
            {
                return min(la_d,lb_d)-aa_d+1;
            }
        }
    }
};