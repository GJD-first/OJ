#include<iostream>
using namespace std;
int a[50010],b[50010];
int main()
{
    int n,m,ma=0;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        ma=max<int>(ma,a[i]);
    }
    for(int i=0;i<m;++i)
    {
        cin>>b[i];
    }
    return 0;
}
