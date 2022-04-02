#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    int a[200010];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        a[n]=0;
        sort(a,a+n+1);
        cout<<(a[n]-a[n-1]>=2?"no":"yes")<<endl;
    }
    return 0;
}
