#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int start=n;
	for(int i=0;i<n;i++)
	{
		cout<<start<<" ";
		for(int j=n;j>=1;j--)
		{
			if(j!=start)
			{
				cout<<j<<" ";
			}
		}
		start--;
		cout<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}