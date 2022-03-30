#include<iostream>
using namespace std;
int  main()
{
    int a[100];
    int size=0;
    do{
        cin>>a[size];
        size++;
    }while(a[size-1]!=0);
    for(int i=size-2;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
