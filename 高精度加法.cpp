#include<iostream>
#include<cstring>
using namespace std;
int add(char a[],char b[],int c[],int n)
{
	int la=strlen(a),lb=strlen(b);
	int lc=max<int>(la,lb)+1;
	int add1[500],add2[500];
	memset(add1,0,sizeof(add1));
	memset(add2,0,sizeof(add2));
	memset(c,0,sizeof(int)*n);
	for(int i=0;i<la;++i)
	{
		add1[i]=a[la-1-i]-'0';
	}
	for(int i=0;i<lb;++i)
	{
		add2[i]=b[lb-1-i]-'0';
	}
	for(int i=0;i<lc;++i)
	{
		c[i]+=add1[i]+add2[i];
		c[i+1]=c[i]/10;
		c[i]=c[i]%10;
	}
	if(lc>1&&c[lc-1]==0)lc--;
	return lc;
}
int main()
{
	char a[510],b[510];
	cin>>a>>b;
	int c[510];
	int n=add(a,b,c,510);
	for(int i=n-1;i>=0;i--)
		cout<<c[i];
	return 0;
}
