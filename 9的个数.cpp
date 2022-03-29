#include<iostream>
using namespace std;
//k!=0
//求解k在[1,n]中出现的次数
//k=[1,9]
int getbit(int n)
{
    if(n==0)return 1;
    int ans=0;
    while(n!=0)
    {
        ans++;
        n/=10;
    }
    return ans;
}
int count(int n,int k)
{
    if(k<1||k>9||n<k)return 0;
    int len=getbit(n);
    int x,y,z;
    int id=1;
    int ans=0;
    for(int i=0;i<len;++i)
    {
        x=n/id/10;
        y=n/id%10;
        z=n%id;
        if(k>y)
        {
            ans+=x*id;
        }
        else if(k==y)
        {
            ans+=x*id+(z+1);
        }
        else
        ans+=(x+1)*id;
        id*=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n,9)<<endl;
    return 0;
}
