#include<bits/stdc++.h>
using namespace std;
int a[100];
void solve()
{
	int n;
	cin>>n;
	int flag1,flag2;
	for(int i=0;i<n;i++)cin>>a[i];
	flag1=a[0]%2;
	flag2=a[1]%2;
	for(int i=2;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[i]%2!=flag1)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		else
		{
			if(a[i]%2!=flag2)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}