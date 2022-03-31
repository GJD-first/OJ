#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll unsigned long long
int main()
{
    ll x,a[200010];
    int ans;
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        ans=0;
        map<ll,int> m;
        cin>>n>>x;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        for(int i=0;i<n;++i)
        {
            if(m[a[i]]==0)continue;
            if(m[a[i]*x]==0)ans++;
            else m[a[i]*x]--;
            m[a[i]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
