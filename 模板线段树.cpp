#include<iostream>
using namespace std;
long long tr[400010];
long long a[100010];
void build(int id,int left,int right)
{
	if(left==right)
	{
		tr[id]=a[left];
		return;
	}
	int mid=left+(right-left)/2;
	build(id<<1,left,mid);
	build((id<<1)+1,mid+1,right);
	tr[id]=tr[id<<1]+tr[(id<<1)+1];
}
long long search(int left,int right,int aleft,int aright,int id)
{
	if(aleft>=left&&aright<=right)return tr[id];
	int mid=aleft+(aright-aleft)/2;
	if(mid<left)
		return search(left,right,mid+1,aright,id*2+1);
	if(mid>=right) 
		return search(left,right,aleft,mid,id*2);
	return search(left,right,aleft,mid,id*2)+search(left,right,mid+1,aright,id*2+1);
}
void update(
int main()
{
	int m,n;
	int op,x,y,k;
	cin>>n>>m;
	for(int i=1;i=n;++i)
	{
		cin>>a[i];
	}
	while(m--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>x>>y>>k;
			
			continue;
		}
		cin>>x>>y;
		cout<<search(x,y,0,n,0)<<endl;
	}
	return 0;
}