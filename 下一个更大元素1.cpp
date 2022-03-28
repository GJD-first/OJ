#include<iostream>
using namespace std;
int main()
{
    int n,top=0;
    int s[1010],a[1010],b[1010];
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        while(top>0&&a[s[top-1]]<a[i])
        {
            b[s[--top]]=a[i];
        }
        s[top++]=i;
    }
    while(top!=0)
    {
        b[s[--top]]=-1;
    }
    for(int i=0;i<n;++i)cout<<b[i]<<" ";
    return 0;
}
