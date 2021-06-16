#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int N = 1025;
bool is[N];
 int n;
int v1[N];
bool check(int k){
	for(int i = 0; i < n; ++i)
		if(!is[v1[i] ^ k])
			return false;

	return true;
}
void solve()
{    
   
    cin>>n;
    for(int i = 0; i < N; ++i)
	is[i] = false;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        is[v1[i]]=true;
    }       
    for(int i=1;i<=1023;i++)
    {
        if(check(i)){
			cout<<i<<endl;
			return;
		}
        
    }
    cout<<-1<<endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}