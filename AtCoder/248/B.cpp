#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long a,b,k;
	cin>>a>>b>>k;
	int ans=0;
	while(a<b)
	{
		ans++;
		a*=k;
	}
	cout<<ans<<endl;
	return 0;
}