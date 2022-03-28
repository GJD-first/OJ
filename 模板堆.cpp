//洛谷模板题  小根堆
#include<iostream>
using namespace std;
int size=0;
int a[1000010];
void swap(int i,int j)
{
    if(i<0||i>=size||j<0||j>=size)return;
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
void up(int id)
{
    if(id>=size||id<=0)return;
    int p=(id-1)/2;
    if(a[id]<a[p])
    {
        swap(id,p);
        up(p);
    }

}
void down(int id)
{
    if(id<0||id>=size-1)return;
    int ls=id*2+1,rs=id*2+2;
    int m=id;
    if(ls>=0&&ls<size&&a[ls]<a[id])m=ls;
    if(rs>=0&&rs<size&&a[rs]<a[m])m=rs;
    if(m!=id)
    {
        swap(id,m);
        down(m);
    }
}
int main()
{
    int n;
    int op;
    int x;
    cin>>n;
    while(n--)
    {
        cin>>op;
        if(op==1)
        {
            cin>>x;
            a[size++]=x;
            up(size-1);
            continue;
        }
        if(op==2)
        {
            cout<<a[0]<<endl;
            continue;
        }
        swap(0,size-1);
        size--;
        down(0);
    }
    return 0;
}
