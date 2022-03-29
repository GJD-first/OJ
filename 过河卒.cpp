#include<iostream>
using namespace std;
bool check(long long x,long long y,long long a,long long b)
{
	if(a==x&&b==y)return false;
	if((a==x-1||a==x+1)&&(b==y-2||b==y+2))return false;
	if((a==x-2||a==x+2)&&(b==y-1||b==y+1))return false;
	return true;
}
int main()
{
	long long x,y,m,n;
	cin>>n>>m;
	cin>>x>>y;
	long long dp[25][25];
	for(long long i=0;i<=n;++i)
	{
		if(!check(x,y,i,0)){
			dp[i][0]=-1;
			continue;
		}
		if(i!=0&&dp[i-1][0]==-1)
		{
			dp[i][0]=-1;
			continue;
		}
		dp[i][0]=1;
	}
	for(long long i=1;i<=m;++i)
	{
		if(!check(x,y,0,i))
		{
			dp[0][i]=-1;
			continue;
		}
		if(dp[0][i-1]==-1)
		{
			dp[0][i]=-1;
			continue;
		}
		dp[0][i]=1;
	}
	for(long long i=1;i<=n;++i)
	{
		for(long long j=1;j<=m;++j)
		{
			if(!check(x,y,i,j)){
				dp[i][j]=-1;
				continue;
			}
			dp[i][j]=0;
			if(dp[i-1][j]!=-1)
				dp[i][j]+=dp[i-1][j];
			if(dp[i][j-1]!=-1)
				dp[i][j]+=dp[i][j-1];
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}
