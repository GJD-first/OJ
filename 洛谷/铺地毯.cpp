#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[10010][4];
    int x,y;
    int ans=-1;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    cin>>x>>y;
    for(int i=0;i<n;++i)
    {
        if(x>=a[i][0]&&x<=a[i][0]+a[i][2]&&y>=a[i][1]&&y<=a[i][1]+a[i][3])
        {
            ans=i+1;
        }
    }
    cout<<ans;
    return 0;
}
