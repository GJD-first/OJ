class Solution {
public:
    int convertTime(string current, string correct) {
        int a=((correct[0]-'0')*10+(correct[1]-'0'))*60+(correct[3]-'0')*10+(correct[4]-'0');
        int b=((current[0]-'0')*10+(current[1]-'0'))*60+(current[3]-'0')*10+(current[4]-'0');
        int ans=0;
        a=a-b;
        if(a>=60)
        {
            ans+=a/60;
            a-=a/60*60;
        }
        if(a>=15)
        {
            ans+=a/15;
            a-=a/15*15;
        }
        if(a>=5)
        {
            ans+=a/5;
            a-=a/5*5;
        }
        if(a>=1)
        {
            ans+=a;
            a-=a;
        }
        return ans;
    }
};
