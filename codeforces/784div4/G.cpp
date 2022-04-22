#include<bits/stdc++.h>
using namespace std;
char s[60][60];
void solve()
{
	int n,m;
	cin>>n>>m;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<m;j++)
			cin>>s[i][j];
	}
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i][j]=='*')
			{
				int k=i;
				while(k!=0&&s[k-1][j]=='.')
				{
					s[k][j]='.';
					s[k-1][j]='*';
					k--;
				}
			}
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<m;j++)
			cout<<s[i][j];
		cout<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}