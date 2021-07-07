#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
void solve()
{    
    int n;
    string s;
	cin >> n;
	cin >> s;
    int arr[10];
	for(int i = 1; i <= 9; i++)
		cin >> arr[i];
	vector<int> diff;
	for(int i = 0; i < n; i++)
		diff.push_back(arr[s[i] - '0'] - (s[i] - '0'));
	for(int i = 0; i < n; i++)
		if(diff[i] > 0)
		{
			while(i < n && diff[i] >= 0)
			{
				s[i] = char(arr[s[i] - '0'] + '0');
				i++;
			}
			break;
		}
	cout << s << endl;
}
int main()
{   
    send help
    cout << setprecision(15) << fixed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}