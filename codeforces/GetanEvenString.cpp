#include<iostream>
#include<cstring>
using namespace std;
char s[200010];
int pos[200010];
int dp[200010];
int tag[26];
void solve()
{
    memset(tag,-1,sizeof(int)*26);
    cin>>s;
    int n=strlen(s);
    for(int i=0;i<n;++i)
    {
        pos[i]=tag[s[i]-'a'];
        tag[s[i]-'a']=i;
    }
    dp[0]=1;
    for(int i=1;i<n;i++)
    {
        if(pos[i]==-1)
        {
            dp[i]=1+dp[i-1];
        }
        else
        {
            dp[i]=min<int>(1+dp[i-1],dp[pos[i]-1]+i-pos[i]-1);
        }
    }
    cout<<dp[n-1]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
