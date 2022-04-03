#include<iostream>
#include<algorithm>
using namespace std;
#define ff(a) for(int i=0;i<a;i++)
#define ll long long

long long sum;
int a[200010];
void solve()
{
    int t;
    int n,k,x;
    cin>>n>>k>>x;
    ff(n)
    {
        cin>>a[i];
        if(k==0){sum+=a[i];continue;}
        t=a[i]/x;
        if(t>=k)
        {
            a[i]=a[i]-k*x;
            k=0;
        }
        else
        {
            a[i]=a[i]-t*x;
            k-=t;
        }
        sum+=a[i];
    }
    sort(a,a+n);
    int i=n-1;
    while(i>=0&&a[i]!=0&&k>0)
    {
        sum-=a[i];
        i--;
        k--;
    }
    cout<<sum<<endl;
}
int main()
{
    solve();
    return 0;
}
