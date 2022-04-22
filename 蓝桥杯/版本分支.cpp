#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[100010];
    memset(a,0,sizeof(a));
    int x,y;
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n-1;++i)
    {
        cin>>x>>y;
        a[y]=x;
    }
    for(int i=0;i<m;++i)
    {
        cin>>x>>y;
        if(x==y)
            cout<<"YES"<<endl;
        else{
        while(a[y]!=0&&a[y]!=x)
        {
            y=a[y];
        }
        if(a[y]==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
    int a=0;
    return 0;
}
