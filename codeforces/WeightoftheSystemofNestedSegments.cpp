#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
class node{
public:
    int x;
    int y;
    node(int x,int y){this->x=x;this->y=y;}
    node(){};
    bool operator<(node b) const
    {
        return this->y>b.y;
    }
};
int main()
{
    int t;
    int m,n;
    int x,w;
    node nd;
    int sum;
    int a[200010];
    int len=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        len=0;
        cin>>n>>m;
        priority_queue<node> heap;
        map<int,int> mp;
        for(int i=0;i<m;++i)
        {
            cin>>nd.x>>nd.y;
            heap.push(nd);
            mp[nd.x]=i+1;
        }
        for(int i=0;i<2*n;++i)
        {
            a[len++]=heap.top().x;
            sum+=heap.top().y;
            heap.pop();
        }
        sort(a,a+2*n);
        cout<<sum<<endl;
        for(int i=0;i<n;++i)
        {
            cout<<mp[a[i]]<<" "<<mp[a[2*n-1-i]]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
