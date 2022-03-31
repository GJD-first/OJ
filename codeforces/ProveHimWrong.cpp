#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>19){cout<<"NO"<<endl;continue;}
        cout<<"YES"<<endl;
        for(int i=1,j=1;i<=n;++i)
        {
            cout<<j<<" ";
            j*=3;
        }
        cout<<endl;

    }
    return 0;
}
