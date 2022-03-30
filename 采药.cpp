#include<iostream>
using namespace std;
int main()
{
	int t,m;
	int a[110][2];
	int dp[110][1010];//在时间j内采前i个获得的最大价值
	cin>>t>>m;
	for(int i=0;i<m;++i)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<m;++i)
	{
		dp[i][0]=0;
	}
	for(int i=1;i<=t;++i)
	{

		if(i>=a[0][0])
		{
			dp[0][i]=a[0][1];
		}
		else{
			dp[0][i]=0;
		}
	}
	for(int j=1;j<=t;++j)
	{
		for(int i=1;i<m;++i)
		{
			if(j-a[i][0]<0)
			{
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=max<int>(dp[i-1][j],dp[i-1][j-a[i][0]]+a[i][1]);
			}

		}
	}
	cout<<dp[m-1][t];
	return 0;
}
