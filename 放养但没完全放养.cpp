#include<iostream>
using namespace std;
int main()
{
    int a[26];
    char c;
    for(int i=0;i<26;++i)
    {
        cin>>c;
        a[c-'a']=i;
    }
    string s;
    cin>>s;
    int n=s.size();
    int ans=1;
    for(int i=1;i<n;++i)
    {
        if(a[s[i]-'a']<=a[s[i-1]-'a'])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
