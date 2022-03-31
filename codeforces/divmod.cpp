#include<iostream>
using namespace std;
int main()
{
    int t;
    int l,r,a;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a;
        if(l/a==r/a)
        {
            cout<<r/a+r%a<<endl;
            continue;
        }
        cout<<max<int>(r/a-1+a-1,r/a+r%a)<<endl;
    }
    return 0;
}
