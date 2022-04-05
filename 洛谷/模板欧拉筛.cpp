#include<bits/stdc++.h>
using namespace std;
int euler(int prime[],bool isprime[],int n)
{
  int len=0;
  for(int i=2;i<=n;i++)
  {
    if(isprime[i])
    {
      prime[len++]=i;
    }
    for(int j=0;j<len&&i*prime[j]<=n;j++)
    {
      isprime[i*prime[j]]=false;
      if(i%prime[j]==0)break;
    }
  }
  return len;
}
int main()
{
  
  return 0;
}
