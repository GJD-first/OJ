#include<iostream>
using namespace std;
int main()
{
    long long t,n,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>x>>y;
        long long now=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(now+x<=b)
            {
                now+=x;
            }
            else{
                now-=y;
            }
            sum+=now;
        }
        cout<<sum<<endl;
    }
    return 0;
}
