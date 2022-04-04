#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int l=0,r=n;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if((1+mid)*mid/2*5+k<=240)
        {
            l=mid;
            continue;
        }
        r=mid-1;
    }
    cout<<l<<endl;
    return 0;
}
