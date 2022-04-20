#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	int a[60];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n<k)
	{
		cout<<-1<<endl;
	}
	else
	{
		sort(a,a+n);
		cout<<a[n-k]<<" "<<a[n-k]<<endl;
	}
	return 0;
}