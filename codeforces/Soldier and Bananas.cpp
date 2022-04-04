#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long k,n,w;
    cin>>k>>n>>w;
    k=k*(w+1)*w/2;
    if(k<=n)cout<<0<<endl;
    else cout<<k-n<<endl;
    return 0;
}
