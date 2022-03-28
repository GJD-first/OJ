#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(fabs(a-b)<1e-8)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
