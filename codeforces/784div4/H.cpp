#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int tag[31]={0};
	int n,k;
	int x;
	int ans=-1;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ans=ans&x;
		for(int j=0;j<=30;j++)
		{
			if(((x>>j)&1)==1)
			{
				tag[j]++;
			}
		}
	}
	for(int i=30;i>=0&&k>0;i--)
	{
		if(n-tag[i]<=k)
		{
			ans=ans|(1<<i);
			k-=n-tag[i];
		}
	}
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}