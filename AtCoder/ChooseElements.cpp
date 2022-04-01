#include<iostream>
#include<cmath>
using namespace std;
long long a[200010],b[200010];
bool dp[200010][2];
long long n,k;
int main()
{
    cin>>n>>k;
    dp[0][0]=true;
    dp[0][1]=true;
    for(long long i=0;i<n;++i)
        cin>>a[i];
    for(long long i=0;i<n;++i)
        cin>>b[i];
    for(long long i=1;i<n;++i)
    {
        dp[i][0]=false;
        dp[i][1]=false;
        if(dp[i-1][0])
        {
            if(abs(a[i]-a[i-1])<=k)
            {
                dp[i][0]=true;
            }
            if(abs(b[i]-a[i-1])<=k)
            {
                dp[i][1]=true;
            }
        }
        if(dp[i-1][1])
        {
            if(abs(a[i]-b[i-1])<=k)
            {
                dp[i][0]=true;
            }
            if(abs(b[i]-b[i-1])<=k)
            {
                dp[i][1]=true;
            }
        }
        if(!dp[i][0]&&!dp[i][1])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
