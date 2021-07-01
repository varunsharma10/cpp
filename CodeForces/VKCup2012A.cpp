#include<bits/stdc++.h>
using namespace std;
int n, k;
int T[51];
 
int main()
{
	cin>>n>>k;
	int i = 1;
	for(; i <= n; ++i)
	{
		cin>>T[i];
		if(T[i] == 0 || T[i] < T[k]) break;
	}
	cout<<i-1<<endl;
	return 0;
}