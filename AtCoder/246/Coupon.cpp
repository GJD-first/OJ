#include<iostream>
#include<algorithm>
using namespace std;
int n,k,x;
long long sum;
int a[200010];
void solve()
{
    int left=0;
    sum=0;
    cin>>n>>k>>x;
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    for(int i=0;i<n;i++)
    {
        if(use>=k)break;
        use+=a[i]/x;
        if(a[i]%x==0)left++;
    }


}
int main()
{
    solve();
    return 0;
}
