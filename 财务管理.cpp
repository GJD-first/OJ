#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double sum=0;
	double x;
	for(int i=0;i<12;++i)
	{
		cin>>x;
		sum+=x;
	}
	printf("$%.2f",sum/12);
	return 0;
}