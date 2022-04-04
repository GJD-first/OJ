#include<bits/stdc++.h>
using namespace std;
bool len(char s[])
{
    int n=strlen(s);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]<='Z')ans++;
    }
    return ans<=n/2;
}
int main()
{
    char s[110];
    cin>>s;
    int n=strlen(s);
    if(len(s))
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>'Z')continue;
            s[i]=s[i]-'A'+'a';
        }
    }
    else
    {
       for(int i=0;i<n;i++)
        {
            if(s[i]<'a')continue;
            s[i]=s[i]-'a'+'A';
        }
    }
    cout<<s<<endl;
    return 0;
}

