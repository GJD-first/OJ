 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
	 int n,t;
	 int a[2010];
	 cin>>n;
	 for(int i=0;i<n;++i)
	 {
		 cin>>a[i];
	 }
	 for(int i=0;i<n;++i)
	 {
		t=abs(a[i]); 
		if(t>=n)
			continue;
		a[t]=-abs(a[t]);
	 }
	 for(t=0;t<n;t++)
	 {
		 if(a[t]>0)
		 {
			 cout<<t<<endl;
			 break;
		 }
	 }
	 if(t>=n)
		 cout<<n<<endl;
	 return 0;
 }