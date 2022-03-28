#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long flag=2;
    for(int i=2;i<=n;i*=2)
    {
        flag=(flag%6662333)*(flag%6662333)%6662333;
    }
    if(n%2!=0)flag=flag*2%6662333;
    cout<<flag/2;
    return 0;
}
