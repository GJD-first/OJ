#include<cstring>
#include<iostream>
using namespace std;
#define N 1000000000
int main()
{
    int dp[1000010];
    memset(dp,0,sizeof(dp));
    f[0]=1;
    for(int i=1;i<=n;i*=2)
    {
        for(int j=i;j<=n;++j)
        {
            f[j]=(f[j]+f[j-i])%N;
        }
    }
    cout<<f[n];
    return 0;
}
