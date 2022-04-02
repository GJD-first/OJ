#include<iostream>
#include<cstring>
using namespace std;
int n;
int p[2010];
void solve()
{
    int x;
    memset(p,0,sizeof(p));
    cin>>n;
    for(int i=0;i<n+1;i++)
    {
        for(int j=1;j<=2*n+1;j++)
        {
            if(p[j]==0)
            {
                p[j]=1;
                cout<<j<<endl;
                break;
            }
        }
        cin>>x;
        p[x]=1;
    }

}
int main()
{
    solve();
    return 0;
}
