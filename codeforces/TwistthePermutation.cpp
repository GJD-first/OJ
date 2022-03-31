#include<iostream>
using namespace std;
int main()
{
    int t;
    int a[2010];
    int pos[2010];
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j=0;//记录起点
        for(int i=0;i<n;++i)cin>>a[i];
        for(int i=n;i>0;i--)
        {
            int step=1;
            while(a[j]!=i)
            {
                if(a[j]!=-1)
                {
                    step++;
                }
                j=(j+1)%n;
            }
            a[j]=-1;
            pos[i-1]=step%i;
        }
        for(int i=0;i<n;++i)cout<<pos[i]<<" ";
        cout<<endl;
    }
    return 0;
}
