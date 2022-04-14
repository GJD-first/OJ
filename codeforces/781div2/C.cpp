#include<bits/stdc++.h>
using namespace std;
int ans;
void fun(vector<int>& a)
{
    if(a.empty())return;
    int n=a.size();
    int last=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[last])
        {
            last=i;
        }
        else
        {
            break;
        }
    }
    a[last]--;
    for(int i=0;i<n;i++)
    {
        a[i]--;
    }
    ans++;
    while(!a.empty()&&a.back()<=0)a.pop_back();
    fun(a);
}
void solve()
{
    int n;
    int x;
    cin>>n;
    vector<int> a(n,0);
    for(int i=1;i<n;i++)
    {
        cin>>x;
        a[--x]++;
    }
    a.push_back(1);
    sort(a.rbegin(),a.rend());
    while(!a.empty()&&a.back()<=0)a.pop_back();
    n=a.size();
    for(int i=0;i<n;i++)
    {
        a[i]-=(n-i);
        ans++;
    }
    sort(a.rbegin(),a.rend());
    while(!a.empty()&&a.back()<=0)a.pop_back();
    fun(a);
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ans=0;
        solve();
    }
    return 0;
}
