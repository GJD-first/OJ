#include<bits/stdc++.h>
using namespace std;
int a[1000010];

void solve()
{
    long long x;
    cin>>x;
    long long root=sqrt(x);
    if(root*root!=x){cout<<"NO"<<endl;return;};
    if(a[root]==1){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
}
int main()
{
    int n;
    memset(a,0,sizeof(a));
    a[0]=1;a[1]=1;
    for(int i=2;i<1000010;i++)
    {
        if(a[i]==1)continue;
        for(int j=2*i;j<1000010;j+=i)
        {
            a[j]=1;
        }
    }
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
