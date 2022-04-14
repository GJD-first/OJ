#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    string a[110],b[110];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        mp[a[i]]++;
        if(b[i]!=a[i])mp[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>1&&mp[b[i]]>1)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
