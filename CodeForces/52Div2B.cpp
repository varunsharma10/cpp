#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    int m,n,i,j,k;
	cin>>m;
    int a[m];
	int l=m,r=1;
	for(int i=1;i<=m;i++) 
    cin>>a[i];
	for(int i=1;i<=m;i++){
		if(a[i]!=i) 
        {
            l=min(l,i);
            r=max(r,i);
        }
        
	}
	reverse(a+l,a+1+r);
	for(int i=1;i<=m;i++){
		if(a[i]!=i) {
            cout<<0<<" "<<0;
            return 0;
        }
	}
	if(l==m&&r==1) 
    {
        cout<<0<<" "<<0;
        return 0;
    }
	cout<<l<<' '<<r<<endl;
}