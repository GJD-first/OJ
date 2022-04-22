#include<bits/stdc++.h>
using namespace std;
char s[100010];
void solve()
{
	int n;
	cin>>n;
	cin>>s;
	int a=0,b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='W')
		{
			if(a==0&&b!=0)
			{
				cout<<"NO"<<endl;
				return;
			}
			if(b==0&&a!=0)
			{
				cout<<"NO"<<endl;
				return;
			}
			a=0;b=0;
		}
		else
		{
			if(s[i]=='R')a++;
			else b++;
		}
	}
		if(a==0&&b!=0)
			{
				cout<<"NO"<<endl;
				return;
			}
			if(b==0&&a!=0)
			{
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
}