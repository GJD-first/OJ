#include<iostream>
#include<algorithm>
using namespace std;
int a[100010];
int n,m;
int binary(int x)
{
	int left=0,right=n-1,mid;
	int ans=-1;
	while(left<=right&&a[right]>x)
	{
		mid=left+(right-left)/2;
		if(a[mid]>x)
		{
			ans=a[mid];
			right=mid-1;
			continue;
		}
		left=mid+1;
	}
	return ans;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int x;
	for(int i=0;i<m;++i)
	{
		cin>>x;
		cout<<binary(x)<<endl;
	}
	return 0;
}
