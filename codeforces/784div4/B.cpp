#include<bits/stdc++.h>
using namespace std;
int a[200010];
void solve()
{
	map<int,int> mp;
	int n;
	int tag=-1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		if(mp[a[i]]>=3)
		{
			tag=a[i];
		}
	}
	cout<<tag<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}