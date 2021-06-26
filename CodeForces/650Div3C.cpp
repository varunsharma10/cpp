#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int res = 0;

    for(int i=0;i<n;)
    {   

        int j = i+1;

        for (; j < n && s[j] != '1'; j++);

			int left = s[i] == '1' ? k : 0;
			int right = j < n && s[j] == '1' ? k : 0;
			int len = j - i;

			if (left == k) {
				len--;
			}

			len -= left + right;

			if (len > 0) {
				res += (len + k) / (k + 1);
			}

			i = j;
	}

	cout << res << endl;
      
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