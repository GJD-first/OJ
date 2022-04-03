#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double x[3],y[3];
    double z[3];
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<3;i++)
    {
        z[i]=sqrt((x[i]-x[(i+1)%3])*(x[i]-x[(i+1)%3])+(y[i]-y[(i+1)%3])*(y[i]-y[(i+1)%3]));
    }
    double t=(z[0]+z[1]+z[2])/2;
    cout<<sqrt(t*(t-z[0])*(t-z[1])*(t-z[2]))<<endl;
}
int main()
{
    solve();
    return 0;
}
