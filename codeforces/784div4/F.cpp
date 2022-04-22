#include<bits/stdc++.h>
using namespace std;
int a[200010];
void solve()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=0;
	int left=0,right=n-1;
	int ls=a[0],rs=a[n-1];
	while(left<right)
	{
		if(ls==rs)
		{
			ans=n-((right-left)-1);
			left++;
			if(left==right)break;
			ls+=a[left];
		}
		else if(ls<rs)
		{
			left++;
			if(left==right)break;
			ls+=a[left];
		}
		else
		{
			right--;
			if(left==right)break;
			rs+=a[right];
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