#include<bits/stdc++.h>
using namespace std;
void T(char s[],int i)
{
    if(s[i]>'Z')return;
    s[i]=s[i]-'A'+'a';
}
int main()
{
    char s1[110],s2[110];
    cin>>s1>>s2;
    int n=strlen(s1);
    for(int i=0;i<n;i++)
    {
        T(s1,i);T(s2,i);
        if(s1[i]==s2[i])continue;
        if(s1[i]>s2[i]){cout<<1<<endl;return 0;}
        cout<<-1<<endl;return 0;
    }
    cout<<0<<endl;
    return 0;
}
