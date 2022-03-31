#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    int t;
    int len;
    cin>>t;
    char s[110];
    while(t--)
    {
        cin>>s;
        len=strlen(s);
        if(len%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<len/2;++i)
        {
            if(s[i]!=s[i+len/2])
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==len/2)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
