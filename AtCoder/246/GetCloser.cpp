#include<iostream>
#include<cmath>
using namespace std;
void solve()
{
    double a,b;
    cin>>a>>b;
    double c=sqrt(a*a+b*b);
    cout<<a/c<<" "<<b/c<<endl;
}
int main()
{
    solve();
    return 0;
}
