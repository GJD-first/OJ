#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
void solve()
{
	int n;
	ll a[121]={0};
	ll ans=0;
	cin>>n;
	char s[3];
	for(int i=0;i<n;i++)
	{
		cin>>s;
		a[(s[0]-'a')*11+s[1]-'a']++;
	}
	for(int i=0;i<121;i++)
	{
		if(a[i]==0)continue;
		int x=i%11,y=i/11;
		for(int j=x+1;j<11;j++)
		{
			ans+=a[i]*a[y*11+j];
		}
		for(int j=y+1;j<11;j++)
		{
			ans+=a[i]*a[j*11+x];
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