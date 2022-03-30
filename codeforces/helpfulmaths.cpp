#include<iostream>
using namespace std;
int main()
{
    string s;
    int a[3]={0,0,0};
    int d=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
            a[0]++;
        }
        else if(s[i]=='2')
        {
            a[1]++;
        }
        else if(s[i]=='3')
        {
            a[2]++;
        }
        else{
            d++;
        }
    }
    for(int i=0;i<=d;i++)
    {
        if(a[0]!=0)
        {
            cout<<1;
            a[0]--;
        }
        else if(a[1]!=0)
        {
            cout<<2;
            a[1]--;
        }
        else{
            cout<<3;
            a[3]--;
        }
        if(i!=d)
        {
            cout<<'+';
        }
    }
    return 0;
}
