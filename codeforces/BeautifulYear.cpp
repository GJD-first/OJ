#include<iostream>
#include<cstring>
using namespace std;
bool check(int n)
{
    int a[10];
    memset(a,0,sizeof(a));
    while(n)
    {
        if(a[n%10]==1)return false;
        a[n%10]=1;
        n/=10;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=n+1;!check(i);++i);
    cout<<i;
    return 0;
}
