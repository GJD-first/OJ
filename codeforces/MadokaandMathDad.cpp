#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n%3;
        if(k==0)
        {
            while(n!=0)
            {
                cout<<"21";
                n-=3;
            }
        }
        else if(k==1)
        {
            while(n!=1)
            {
                cout<<"12";
                n-=3;
            }
            cout<<"1";
        }
        else
        {
            while(n!=2)
            {
                cout<<"21";
                n-=3;
            }
            cout<<"2";
        }
        cout<<endl;
    }
    return 0;
}
