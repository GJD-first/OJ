#include <stdio.h>
#include<limits.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
	int a[15][15];
	int flag=0;
	int rmax[15],cmin[15];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		rmax[i]=INT_MIN;
	}
	for(int i=0;i<m;i++)
	{
		cmin[i]=INT_MAX;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			cmin[j]=min(cmin[j],a[i][j]);
			rmax[i]=max(rmax[i],a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==rmax[i]&&a[i][j]==cmin[j])
			{
				printf("%d %d %d\n",a[i][j],i+1,j+1);
				flag=1;
			}
		}
	}
	if(!flag)
	{
		printf("No answer\n");
	}
	return 0;
}