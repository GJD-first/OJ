#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	a=3600*a+60*b;
	b=c*3600+d*60+1;
	if(a<b)
	{
		cout<<"Takahashi"<<endl;
	}
	else
	{
		cout<<"Aoki"<<endl;
	}
	return 0;
}