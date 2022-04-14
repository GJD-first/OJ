#include<bits/stdc++.h>
using namespace std;
#define N 100010
int a[N];
void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx=max<int>(mx,mp[a[i]]);
    }
    n=n-mx;
    if(n<=0){cout<<0<<endl;return;}
    if(n<=mx){cout<<n+1<<endl;return;}
    int i=0;
    int step=mx+1;
    n-=mx;
    while(n>0)
    {
        i++;
        if(n-(1<<i)*mx>=0)
        {
            step+=1+(1<<i)*mx;
            n-=(1<<i)*mx;
        }
        else
        {
            step+=1+n;
            n=0;
        }
    }
    cout<<step<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
