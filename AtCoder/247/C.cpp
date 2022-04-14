
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a={1};
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
	    int k=a.size();
		a.push_back(i);
		for(int j=0;j<k;j++)
            a.push_back(a[j]);
	}
	for(int t:a)
	{
		cout<<t<<" ";
	}
    return 0;
}
