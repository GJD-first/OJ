#include<iostream>
#include<cstring>
using namespace std;
int n,k;
int a[500010];
int dp[1000010];
int ans[2]={0,0};
void solve()
{
    cin>>n>>k;
    memset(dp,0,sizeof(dp));
    int left=0,right=0;
    int ct=0;
    for(int i=0;i<n;++i)cin>>a[i];
    while(right<n)
    {
        if(dp[a[right]]!=0)
        {
            dp[a[right]]++;
            right++;
        }
        else if(ct<k)
        {
            ct++;
            dp[a[right]]++;
            right++;
        }
        else
        {
            while(left<=right&&ct==k)
            {
                dp[a[left]]--;
                if(dp[a[left]]==0)ct--;
                left++;
            }
        }
        if(right-left>=ans[0])
        {
            ans[0]=right-left;
            ans[1]=right-1;
        }
    }
    cout<<ans[1]-ans[0]+1+1<<" "<<ans[1]+1;
}
int main()
{
    solve();
    return 0;
}
