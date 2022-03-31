#include<iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==0&&y==0)
        {
            cout<<0<<endl;
            continue;
        }
        int a=x*x+y*y;
        int r=0;
        for(r=1;r*r<a;r++);
        if(r*r==a){cout<<1<<endl;continue;}
        cout<<2<<endl;
    }
    return 0;
}
