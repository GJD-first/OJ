#include<iostream>
using namespace std;
int a[1000000];
int count(int i,int n)
{
    int ans=0;
    for(int j=0;j<n;++j)
    {
        ans+=(a[j]>>i)&1;
    }
    return ans>n/2?1:0;
}
int main()
{
    int t,l,r,x;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x=0;
        for(int i=0;i<=r;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<=17;j++)
        {
            x|=count(j,r+1)<<j;
        }
        cout<<x<<endl;
    }
    return 0;
}
