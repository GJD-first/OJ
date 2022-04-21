#include <bits/stdc++.h>
using namespace std;
void solve()
{
	char s[10];
	cin>>s;
	map<char,int> mp;
	for(int i=0;i<6;i++)
	{
		if(s[i]=='r'||s[i]=='g'||s[i]=='b')
		{
			mp[s[i]]++;
			continue;
		}
		if(mp[s[i]+32]!=0)
		{
			continue;
		}
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}