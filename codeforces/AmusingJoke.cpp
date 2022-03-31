#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[3][110];
    for(int i=0;i<3;i++)
        cin>>s[i];
    int a[26];
    memset(a,0,sizeof(a));
    int la=strlen(s[0]),lb=strlen(s[1]),lc=strlen(s[2]);
    if(la+lb!=lc)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<lc;++i)
    {
        a[s[2][i]-'A']++;
    }
    for(int i=0;i<la;++i)
    {
        if(a[s[0][i]-'A']==0){cout<<"NO";return 0;}
        a[s[0][i]-'A']--;
    }
    for(int i=0;i<lb;++i)
    {
        if(a[s[1][i]-'A']==0){cout<<"NO";return 0;}
        a[s[1][i]-'A']--;
    }
    cout<<"YES";
    return 0;
}
