#include<bits/stdc++.h>
using namespace std;
int main()
{
	int idx,idy;
	int t;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>t;
			if(t==1)
			{
				idx=i;
				idy=j;
			}
		}
	}
	cout<<abs(2-idx)+abs(2-idy)<<endl;
	return 0;
}