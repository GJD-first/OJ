#include<iostream>
#include<cstring>
using namespace std;
bool check(char *s)
{
    int n=strlen(s);
    if(s[0]!='R')return false;
    if(s[1]>='A'&&s[1]<='Z')return false;
    for(int i=2;i<n;i++)
    {
        if(s[i]=='C')return true;
    }
    return false;
}
int main()
{
    int n;
    char s[2000010];
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(check(s))
        {

        }
        else
        {

        }
    }
    return 0;
}
