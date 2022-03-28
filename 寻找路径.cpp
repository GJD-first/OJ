#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[200010];
    int path[200010];
    cin>>n;
    for(int i=1;i<n;++i)
    {
        cin>>a[i];
    }
    int len=0;
    int k=n;
    while(k!=1)
    {
        path[len++]=k;
        k=a[k-1];
    }
    path[len]=1;
    while(len>=0)
    {
        cout<<path[len--]<<" ";
    }
    return 0;
}
