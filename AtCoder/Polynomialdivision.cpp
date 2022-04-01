#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[300],b[300],c[300];
    memset(a,0,sizeof(a));
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++)cin>>a[i];
    for(int i=0;i<=n+m;i++)cin>>c[i];
    b[0]=c[0]/a[0];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            c[i]-=a[j]*b[i-j];
        }
        b[i]=c[i]/a[0];
    }
    for(int i=0;i<=m;++i)cout<<b[i]<<" ";
    return 0;
}
