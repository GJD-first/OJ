#include<iostream>
using namespace std;
int euler(int[] prime,int v[],int maxn)
{
	int n=0;
	memset(v,0,sizeof(int)*maxn);
	for(int i=2;i<maxn;++i)
	{
		if(is[i]==0)
		{
			v[i]=i;
			prime[n++]=i;
		}
		for(int j=0;j<n;j++)
		{
			if(prime[j]*i>=maxn)break;
			v[prime[j]*i]=prime[j];
		}
	}
	return n;
}