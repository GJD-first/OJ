#include<iostream>
using namespace std;
int a[3][2];
void solve()
{
    for(int i=0;i<3;i++)cin>>a[i][0]>>a[i][1];
    int x=0,y=0;
    for(int i=0;i<3;i++)
    {
        x^=a[i][0];
        y^=a[i][1];
    }
    cout<<x<<" "<<y<<endl;
}
int main()
{
    solve();
    return 0;
}
