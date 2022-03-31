#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int ans=0;
    char s[100];
    int n;
    cin>>n;
    cin>>s;
    int pre=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[pre])
        {
            ans++;
            continue;
        }
        pre=i;
    }
    cout<<ans;
    return 0;
}
