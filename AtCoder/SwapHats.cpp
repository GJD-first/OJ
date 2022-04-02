#include<iostream>
using namespace std;
void solve()
{
    char a[6];
    for(int i=0;i<6;++i)cin>>a[i];
    int s=0;
    for(int i=0;i<3;++i)
    {
        if(a[i]==a[i+3])s++;
    }
    if(s==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
int main()
{
    solve();
    return 0;
}
