#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int n;
    int now=0;
    int x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        now+=y-x;
        ans=max<int>(ans,now);
    }
    cout<<ans<<endl;
    return 0;
}
