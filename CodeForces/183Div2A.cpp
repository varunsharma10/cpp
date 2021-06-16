
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<i;j++)
		{
			int t=i*i+j*j;
			int c=sqrt(t);
			if(c*c!=t) continue;
			if(c>n) continue;
			if(i+j<=c||i+c<=j||c+j<=i) continue;
			ans++;
		}
	}
	cout<<ans<<endl;
}