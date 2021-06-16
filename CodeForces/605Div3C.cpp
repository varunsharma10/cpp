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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<k;i++)
    {
        char a;
        cin>>a;
        st.insert(a);
    }    
    ll ans=0; 
    for (int i = 0; i < n; ++i) {
		int j = i;
		while (j < n && st.count(s[j])) ++j;
		int len = j - i;
		ans += len * 1ll * (len + 1) / 2;
		i = j;
	}
    cout<<ans<<endl;
    
}