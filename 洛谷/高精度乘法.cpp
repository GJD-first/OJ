#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[2010],s2[2010];
	int a[2010],b[2010],c[4010];
	memset(c,0,sizeof(c));
	cin>>s1>>s2;
	int la=strlen(s1),lb=strlen(s2);
	for(int i=0;i<la;++i)
	{
		a[i]=s1[la-1-i]-'0';
	}
	for(int i=0;i<lb;++i)
	{
		b[i]=s2[lb-1-i]-'0';
	}
	int lc=la+lb+1;
	for(int i=0;i<la;++i)
	{
		for(int j=0;j<lb;j++)
		{
			c[i+j]+=a[i]*b[j];
			c[i+j+1]+=c[i+j]/10;
			c[i+j]=c[i+j]%10;
		}
	}
	for(int i=0;i<lc;++i)
	{
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	while(lc>1&&c[lc-1]==0)lc--;
	for(int i=lc-1;i>=0;i--)
	{
		cout<<c[i];
	}
	return 0;
}
