#include<iostream>
using namespace std;
int face[][2]={{1,0},{0,-1},{-1,0},{0,1}};
int n;
char s[100010];
void solve()
{
  cin>>n>>s;
  int j=0;
  int x=0,y=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='R')
    {
      j=(j+1)%4;
    }
    else
    {
      x+=face[j][0];
      y+=face[j][1];
    }
  }
  cout<<x<<" "<<y<<endl;
}
int main()
{
  solve();
  return 0;
}
