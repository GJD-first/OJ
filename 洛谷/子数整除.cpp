#include<iostream>
using namespace std;
bool check(int n,int k)
{
    int a=n%1000,b=n/10%1000,c=n/100%1000;
    return (a%k==0)&&(b%k==0)&&(c%k==0);
}
int main()
{
    int k;
    bool flag=false;
    cin>>k;
    for(int i=10000;i<=30000;++i)
    {
        if(check(i,k))
        {
            cout<<i<<endl;
            flag=true;
        }
    }
    if(!flag)
    {
        cout<<"No"<<endl;
    }
    return 0;
}
