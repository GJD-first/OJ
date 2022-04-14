#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%4==0)
    {
        cout<<n/4<<" "<<n/4<<" "<<n/4<<" "<<n/4<<endl;
    }
    else if(n%4==3)
    {
        cout<<n-5<<" "<<2<<" "<<2<<" "<<1<<endl;
    }
    else if(n%4==2)
    {
        cout<<(n-2)/2-1<<" "<<(n-2)/2+1<<" "<<1<<" "<<1<<endl;
    }
    else if(n%4==1)
    {
        cout<<(n-1)/4<<" "<<(n-1)/2<<" "<<(n-1)/4<<" "<<1<<endl;
    }
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
