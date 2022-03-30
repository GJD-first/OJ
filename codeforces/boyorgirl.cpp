#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[26];
    char c[110];
    int len=0;
    memset(a,0,sizeof(a));
    cin>>c;
    int n=strlen(c);
    for(int i=0;i<n;++i)
    {
        if(len==26)break;
        if(a[c[i]-'a']==1)continue;
        a[c[i]-'a']=1;
        len++;
    }
    if(len%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
