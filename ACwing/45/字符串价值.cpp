#include<iostream>
using namespace std;
void solve()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int s=0;
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++)
    {
        s+=a[t[i]-'1'];
    }
    cout<<s<<endl;
}
int main()
{
    solve();
    return 0;
}
