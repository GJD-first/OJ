#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char s[10];
	int sum=0;
	cin>>s;
	for(char c:s)
	{
		sum+=c-'0';
	}
	cout<<45-sum-48<<endl;
	return 0;
}