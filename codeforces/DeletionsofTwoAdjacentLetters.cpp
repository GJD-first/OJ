#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,len;
    int i;
    char s[100];
    char c;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>c;
        len=strlen(s);
        for(i=0;i<len;++i)
        {
            if(s[i]!=c)continue;
            if(i%2==0&&(len-1-i)%2==0)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i==len)
        cout<<"NO"<<endl;
    }
    return 0;
}
