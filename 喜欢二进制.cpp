#include<iostream>
using namespace std;
int n;
void dfs(int &ans,int k)
{
	if(k>n)return;
	ans++;
	dfs(ans,k*10);
	dfs(ans,k*10+1);
}
int main()
{
	cin>>n;
	int ans=0;
	dfs(ans,1);
	cout<<ans;
	return 0;
}