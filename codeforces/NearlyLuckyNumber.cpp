#include<iostream>
using namespace std;
bool check(int n)
{
    if(n==0)return false;
    while(n)
    {
        if(n%10!=4&&n%10!=7)return false;
        n/=10;
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    int i=0;
    while(n)
    {
        if(n%10==4||n%10==7)i++;
        n/=10;
    }
    if(check(i))cout<<"YES";
    else cout<<"NO";
    return 0;
}
