#include<bits/stdc++.h>
using namespace std;
#define FOR(a) for(int i=0;i<a;i++)
#define WHILE(a,b) while((a)!=(b))
#define sz(x) (x).size()
bool check(string& s)
{
    int n=sz(s);int i=n-1;
    while(i>=0&&s[i]!='C')
    {
        i--;
    }
    if(i<=0)
    {
        return true;
    }
    if(s[i-1]>='A')return true;
    return false;
}
void R2A(string& s)
{
    int n=sz(s);
    int r=0;
    int c=0;
    int i=1;
    WHILE(s[i],'C'){r=r*10+(s[i]-'0');i++;}
    i++;
    WHILE(i,n){c=c*10+(s[i]-'0');i++;}
    string t;
    while(c)
    {
        t+=(c-1)%26+'A';
        c=(c-1)/26;
    }
    reverse(t.begin(),t.end());
    cout<<t+to_string(r)<<endl;
}
void A2R(string& s)
{
    int c=0,r=0;
    int n=sz(s);
    FOR(n)
    {
        if(s[i]>='A')
        {
            c=c*26+1;
            c+=s[i]-'A';
        }
        else
        {
            r=r*10+(s[i]-'0');
        }
    }
    cout<<"R"+to_string(r)+"C"+to_string(c)<<endl;
}
void solve()
{
    string s;
    cin>>s;
    if(check(s))A2R(s);
    else R2A(s);
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
